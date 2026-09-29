/* Restore the hidden x8 string result and the original reverse insertion
 * algorithm without the decompiler's lost stringstream arguments.
 * KRW groups by 3; other currencies put a dot after the last 2 digits. */
#include "aos5_protos.h"
gh_long bzStateGame__convertMoneyStr_003fcd68(uint64_t out, uint64_t self,
                                          uint64_t value, uint64_t currency)
{
    char digits[32], reversed[48], result[48];
    snprintf(digits, sizeof(digits), "%d", (int)value);
    const char *code = *(const char **)(uintptr_t)currency;
    int decimal = strcmp(code, (const char *)IMG(0xa4d796)) != 0;
    size_t count = 0;
    int grouped = 0, fraction = 0;
    for (size_t i = strlen(digits); i > 0; --i) {
        if (decimal && fraction < 2) ++fraction;
        else {
            if (decimal && fraction == 2) {
                reversed[count++] = '.';
                fraction = 3;
            }
            if (grouped > 2) {
                reversed[count++] = ',';
                grouped = 0;
            }
            ++grouped;
        }
        reversed[count++] = digits[i - 1];
    }
    for (size_t i = 0; i < count; ++i) result[i] = reversed[count - i - 1];
    result[count] = 0;
    FUN_009d4eac(GH_ARG(out), GH_ARG(result), 0, 0, 0, 0, 0, 0);
    return (gh_long)self;
}
