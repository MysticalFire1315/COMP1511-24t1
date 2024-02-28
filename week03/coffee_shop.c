// COMP1511 24T1 Tutorial 03 - coffee_shop.c
// This program is a simple coffee shop used to demonstrate the use of
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// TODO: Define an enum `coffee_type` that stores the different types of coffees
// the shop sells. These are: LATTE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.

enum coffee_type {
    LATTE,
    CAPPUCCINO,
    ESPRESSO,
    AMERICANO,
    MATCHA
};

// TODO: Define a struct `coffee` that stores
// 1. the coffee type (an enum)
// 2. the number of sugars
// 3. the size of a coffee

struct coffee {
    enum coffee_type type;
    int sugars;
    char size;
};

int main(void) {
    // TODO: Initalise a variable for the struct
    struct coffee coffee_variable;

    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, "
           "3: AMERICANO, 4: MATCHA): ");

    // TODO: take user input
    // Can scan directly into struct. Enums value starts from 0, hence
    // can convert directly
    scanf("%d", &coffee_variable.type);

    // Alternative way to scan and store enum

    // int type = 0;
    // scanf("%d", &type);
    // if (type == 0) {
    //     coffee_variable.type = LATTE;
    // } else if (type == 1) {
    //     coffee_variable.type = CAPPUCCINO;
    // } else if (type == 2) {
    //     coffee_variable.type = ESPRESSO;
    // } else if (type == 3) {
    //     coffee_variable.type = AMERICANO;
    // } else if (type == 4) {
    //     coffee_variable.type = MATCHA;
    // }

    printf("Enter number of sugars: ");
    // TODO: take user input
    scanf("%d", &coffee_variable.sugars);

    printf("Enter size (L for Large, R for Regular): ");
    // TODO: take user input
    scanf(" %c", &coffee_variable.size);

    // TODO: Calculate cost of order
    double total_cost = BASE_COST;

	if (coffee_variable.size == LARGE) {
		total_cost += ADDED_COST;
	}

	if (coffee_variable.type == LATTE
        || coffee_variable.type == CAPPUCCINO
        || coffee_variable.type == MATCHA) {
			total_cost += ADDED_COST;
	}

	total_cost += ADDED_COST * coffee_variable.sugars;

    printf("Total cost: %.2lf\n", total_cost);
    return 0;
}

