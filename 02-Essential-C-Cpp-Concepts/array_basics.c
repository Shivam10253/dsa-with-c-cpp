#include <stdio.h>

int main() {
    int A[5]; // declaration
    int B[5] = {2, 4, 6, 8, 10}; // declaration with initialization

    int i;
    for (i = 0; i < 5; i++) {
        printf("%d", B[i]);
    }

}