// How much memory int float and char take place?

// Int takes 4 bytes
// Char takes 1 bytes (1bytes = 8bits)
// Float takes 4 bytes

#include <stdio.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return 0;
}

// Run on your computer and check how many memory does it takes place