// COMP1511 24T1 Tutorial 02 - variables.c
// This program shows how to declare and initalise variables.
// It also shows how to define and use constants.

#include <stdio.h>

int main(void) {
    // 1. Declare the variables
    int number1;
    char letter1;
    double decimal1;
    
    // 2. Initalise the variables
    number1 = 1;
    letter1 = 'b';
    decimal1 = 123.123456789;

    // Declare and assign
    int number2 = 3;
    
    // 3. Print the variables
    printf("%d\n", number1);
    printf("%c\n", letter1);
    printf("%0.9lf\n", decimal1);
    
    // 4. Reassign the values of some of the variables
    number1 = 2;
    
    // 5. Print the variables
    printf("%d\n", number1);
    
    return 0;
}

