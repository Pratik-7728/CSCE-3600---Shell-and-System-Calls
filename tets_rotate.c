#include <stdio.h>
#include <stdint.h>
#include "major1.h"

int main(void) {
    /* Test case from the assignment specification: */
    /* 1 rotated right by 1 position gives 2147483648 */
    uint32_t val1 = 1;
    uint32_t pos1 = 1;
    printf("%u rotated by %u position gives: %u (Expected: 2147483648)\n",
           val1, pos1, rotate_right(val1, pos1));

    /* Test case for 0 rotation (edge case check) */
    uint32_t val2 = 5;
    uint32_t pos2 = 0;
    printf("%u rotated by %u position gives: %u (Expected: 5)\n",
           val2, pos2, rotate_right(val2, pos2));

    /* Test case: 0x80000000 (MSB set) rotated right by 1 gives 0x40000000 */
    uint32_t val3 = 2147483648U;
    uint32_t pos3 = 1;
    printf("%u rotated by %u position gives: %u (Expected: 1073741824)\n",
           val3, pos3, rotate_right(val3, pos3));

    return 0;
}
