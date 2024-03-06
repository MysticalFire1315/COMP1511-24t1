// COMP1511 24T1 Tutorial 04 - functions.c
// This program is a simple demonstration of functions

#include <stdio.h>

int sum(int number1, int number2);

int main(void) {
    int num1 = 5;
    int num2 = 3;

    int result = sum(num1, num2);

    printf("Result: %d\n", result);

    return 0;
}

// Calculates the sum of 2 numbers
int sum(int number1, int number2) {
    int sum = number1 + number2;

    return sum;
}