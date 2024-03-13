// COMP1511 24T1 Tutorial 05 - galaxy.c
//
// This program is a simple game that allows the user to build a galaxy.
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

#define TRUE 1
#define FALSE 0

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // TODO: Initialize the galaxy
    int row = 0;
    int col = 0;
    while (row < SIZE) {
        col = 0;
        while (col < SIZE) {
            galaxy[row][col].entity = EMPTY;
            galaxy[row][col].points = 0;
            col++;
        }
        row++;
    }

    // TODO: Place the player in the galaxy
    int valid_position = FALSE;
    while (valid_position == FALSE) {
        printf("Enter the starting position of the player: ");
        int player_row;
        int player_col;
        scanf("%d %d", &player_row, &player_col);

        if (!(0 < player_row && player_row < SIZE - 1)
            || !(0 < player_col && player_col < SIZE - 1)) {
            printf("Invalid starting position!\n");
        } else {
            // Player position is valid
            galaxy[player_row][player_col].entity = SPACESHIP;
            valid_position = TRUE;
        }
    }

    // TODO: Place the planets and nebulae in the galaxy
    printf("How many planets and nebulae are there? ");
    int num_bodies;
    scanf("%d", &num_bodies);

    // TODO: Place the planets and nebulae in the galaxy
    printf("Enter the position and points of the planet(s) and nebula(e): ");
    int i = 0;
    int points;
    while (i < num_bodies) {
        char body_type;
        scanf(" %c %d %d", &body_type, &row, &col);

        if (body_type == 'p') {
            // Is planet
            scanf("%d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (body_type == 'n') {
            // Is nebula
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
        i++;
    }

    // TODO: Place the stars in the galaxy
    printf("Enter the position and points of the star(s): \n");
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }

    // TODO: Print the map
    print_map(galaxy);
}

// Function prints the map of the galaxy
//
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}
