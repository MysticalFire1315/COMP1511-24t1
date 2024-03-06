// COMP1511 24T1 Tutorial 4 - scanf.c
// A simple demonstration of scanf return value

#include <stdio.h>

int main(void) {
    char letter = 0;
    int scanf_return = 0;

    // Stores the number of variables scanned successfully
    scanf_return = scanf(" %c", &letter);

    printf("The letter scanned is %c\n", letter);

    // Prints 1 if letter was inputted
    // Prints -1 if ctrl+D
    printf("scanf_return = %d\n", scanf_return);

    return 0;
}
