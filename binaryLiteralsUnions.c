//how assignment of binary literals works with unions on a little-endian system
/*
for example, dosHeaderWindowsX64.magic = UINT16_C(0b01011010'01001101); //5A 4D
results in 4D 5A when output is viewed in a hex editor
*/
#include <stdio.h>
#include <stdint.h>

union Test {
    uint8_t u8[8];
    uint64_t u64;
};

int main(int argc, char** argv) {
    union Test test;
    test.u64 = UINT64_C(0b00001110'00011111'10111010'00001110'00000000'10110100'00001001'11001101); //0E 1F BA 0E 00 B4 09 CD
    if(test.u8[0] == UINT8_C(0b00001110)) //0E
        printf("test.u8[0] == 0b00001110\n");
    else if(test.u8[0] == UINT8_C(0b11001101)) //CD
        printf("test.u8[0] == 0b00001110\n"); //this runs
    return 0;
}
