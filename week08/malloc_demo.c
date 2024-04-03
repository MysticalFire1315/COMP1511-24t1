// COMP1511 24T1 Tutorial 08 - malloc_demo.c
//
// This program demonstrates the use of malloc and free
// for some simple data types.

#include <stdio.h>
#include <stdlib.h>

struct my_struct {
    int number;
    char letter;
    double another_number;
};

int main(void) {
    // Demonstrating use of sizeof
    printf("Size of an int: %lu\n", sizeof(int));
    printf("Size of an double: %lu\n", sizeof(double));
    printf("Size of an char: %lu\n", sizeof(char));

    // 1. Malloc the following data types
    // 2. Free each data type

    // an integer
    int *b = malloc(sizeof(int));
    free(b);

    // a double
    double *d = malloc(sizeof(double));
    free(d);

    // a character
    char *c = malloc(sizeof(char));
    free(c);

    // an array of 10 characters
    char *array = malloc(sizeof(char) * 10);
    free(array);

    // my_struct
    struct my_struct *s = malloc(sizeof(struct my_struct));
    free(s);

    return 0;
}
