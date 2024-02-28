// COMP1511 24T1 Lab 03 - scanf.c
// This program demonstrates the use of multiple scanfs together.

#include <stdio.h>

int main(void) {
    char letter = '\0';
    scanf(" %c", &letter);
    printf("The character is %c\n", letter);
    scanf(" %c", &letter);
    printf("The character is %c\n", letter);

    return 0;
}
