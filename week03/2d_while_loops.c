// COMP1511 24T1 Tutorial 03 - 2d_while_loops.c
// This program is a simple demonstration of a 2D while loop

#include <stdio.h>

#define MAX 5

int main(void) {
    // // outer loop starts
    // while (/* outer condition */) {
    //     // inner loop starts
    //     while (/* inner condition */) {
    //         // inner body loop
    //     }
    //     // inner loop ends
    // }
    // // outer loop ends

    printf("Start of outer loop!\n");

    int row = 0;
    int col = 0;

    while (row < MAX) {
        printf("Start of inner loop!\n");
        col = 0;
        while (col < MAX) {
            printf("%d ", col);
            col++;
        }
        printf("\nEnd of inner loop!\n");
        row++;
    }
    printf("End of outer loop!\n");

    printf("%d\n", col);

    return 0;
}

