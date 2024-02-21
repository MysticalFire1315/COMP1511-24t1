// COMP1511 24T1 Tutorial 02 - circle.c
// This program calculates the area of a circle.

#include <stdio.h>

#define PI 3.14

int main(void) {
    // Print prompt
    printf("Please enter the radius: ");

    // Scan in radius from user
    int radius;
    scanf("%d", &radius);
    // printf("%d\n", radius);

    // Calculate area
    double area = PI * radius * radius;

    // Print out radius and area of circle
    printf("The area of a circle with radius %d is %lf\n", radius, area);
    printf("The circumference of the circle is %lf\n", PI * 2 * radius);

    return 0;
}
