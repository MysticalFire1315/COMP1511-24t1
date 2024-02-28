// COMP1511 24T1 Tutorial 03 - while_loops.c
// This program is a simple demonstration of a count loop in C

#include <stdio.h>

int main(void) {
    printf("Start of loop!\n");

    int x = 0;

    while (x < 10) {
        printf("%d\n", x);
        x++;
        // x = x + 1;
        // x += 1;
    }
    printf("End of loop!\n");

    return 0;
}

