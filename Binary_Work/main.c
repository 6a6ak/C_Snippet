#include <stdio.h>
#include <stdlib.h>

#define BIT_SET(tal, bitNo) ((tal) |= (1ULL << (bitNo)))
#define BIT_CLEAR(a, b) ((a) &= ~(1ULL << (b)))
#define BIT_FLIP(a, b) ((a) ^= (1ULL << (b)))
#define BIT_CHECK(a, b) (!!((a) & (1ULL << (b))))

void printBits(size_t const size, void const* const ptr) {
    unsigned char* b = (unsigned char*)ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    printf("\n");
}

int main() {
    unsigned char PORTE = 0b00000110; // Initial value 6
    printf("Initial value of PORTE: ");
    printBits(sizeof(PORTE), &PORTE);

    // Set multiple bits (set bits 3 and 5)
    PORTE |= 0b00101000; // Set bits 3 and 5 to 1
    printf("After setting bits 3 and 5: ");
    printBits(sizeof(PORTE), &PORTE);

    // Clear multiple bits (clear bits 1 and 3)
    PORTE &= ~0b00001010; // Clear bits 1 and 3
    printf("After clearing bits 1 and 3: ");
    printBits(sizeof(PORTE), &PORTE);

    // Flip bit 2
    BIT_FLIP(PORTE, 2);
    printf("After flipping bit 2: ");
    printBits(sizeof(PORTE), &PORTE);

    // Check if bit 5 is set
    if (BIT_CHECK(PORTE, 5)) {
        printf("Bit 5 is set.\n");
    } else {
        printf("Bit 5 is not set.\n");
    }

    // Set bit 6 using BIT_SET macro
    BIT_SET(PORTE, 6);
    printf("After setting bit 6: ");
    printBits(sizeof(PORTE), &PORTE);

    // Clear bit 6 using BIT_CLEAR macro
    BIT_CLEAR(PORTE, 6);
    printf("After clearing bit 6: ");
    printBits(sizeof(PORTE), &PORTE);

    return 0;
}
