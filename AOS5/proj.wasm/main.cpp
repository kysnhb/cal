#include "AppDelegate.h"
#include "platform/Application.h"
#include "base/UserDefault.h"

// Browser mmap is a copy of the file. Explicitly msync it before IDBFS syncs,
// otherwise settings appear saved until the tab is reloaded.
class WebUserDefault final : public ax::UserDefault {
public:
    void flush() override {
        ax::UserDefault::flush();
        if (_rwmmap && _rwmmap->is_mapped()) {
            std::error_code error;
            _rwmmap->sync(error);
        }
    }
};

void axmol_wasm_app_exit() {}

int main() {
    ax::UserDefault::setDelegate(new WebUserDefault());
    // The browser owns the frame loop; this object must outlive main().
    static AppDelegate app;
    return ax::Application::getInstance()->run();
}
