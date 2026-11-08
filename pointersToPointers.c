//how to assign an address to a pointer in a function without losing the address on function return
#include <stdio.h>

int a = 0;
int b = 1;

void testFunction(int** test) {
    *test = &b;
}

int main(int argc, char** argv) {
    int* test = &a;
    testFunction(&test);
    printf("%d", *test); //prints 1
    return 0;
}
