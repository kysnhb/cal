/* ARM64 x8 is the C++ string return buffer. Recovered from 0x29fa8c,
 * 0x29fab4 and 0x29fb24..30 (Ghidra base +0x100000).
 * Product records are 0x38 bytes; currency code is the string at +0x30. */
#include "aos5_protos.h"
gh_long bzStateGame__getCurCode_0039fa6c(uint64_t out, uint64_t self, uint64_t product)
{
    FUN_009d4eac(GH_ARG(out), GH_ARG(""), 0, 0, 0, 0, 0, 0);
    uint8_t *begin = *(uint8_t **)((uint8_t *)(uintptr_t)self + 0x388);
    uint8_t *end = *(uint8_t **)((uint8_t *)(uintptr_t)self + 0x390);
    const char *id = *(const char **)(uintptr_t)product;
    for (uint8_t *row = begin; row != end; row += 0x38) {
        if (strcmp(*(const char **)row, id) == 0)
            FUN_009d899c(GH_ARG(out), GH_ARG(row + 0x30));
    }
    return (gh_long)self;
}
