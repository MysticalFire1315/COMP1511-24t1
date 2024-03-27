// COMP1511 24T1 Tutorial 07 - cmdline_args.c
//
// This program counts the number of command line arguments
// and prints them.

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of cmdline args: %d\n", argc);

    int i = 0;
    while (i < argc) {
        int j = 0;
        while (argv[i][j] != '\0') {
            printf("%c", argv[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
