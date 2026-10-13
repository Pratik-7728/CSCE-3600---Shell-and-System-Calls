#include <stdio.h>
#include <stdint.h>
#include "major1.h"

int main(void) {
    uint32_t val1 = 123;
    uint32_t val2 = 7;

    printf("Parity of %u is %d (Expected: 0)\n", val1, compute_parity(val1));
    printf("Parity of %u is %d (Expected: 1)\n", val2, compute_parity(val2));
    return 0;
}
