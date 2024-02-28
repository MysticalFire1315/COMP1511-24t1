# COMP1511 Tutorial 03

## While Loops

- Condition is checked before and after each execution
  of the loop body
- Condition should contain at least 1 variable, which
  changes within the loop body

```c
while (/* some condition is true */) {
    // loop body
    // execute some code
}
```

### Examples

```c
// Count loop
int counter = 0;
while (counter < MAX) {
    // Do something here
    counter++; // increment counter

    // Other ways to increment counter
    // counter = counter + 1;
    // counter += 1;
}

// Conditional/Sentinal loop
char answer = 'n';
while (answer != 'y') {
    // Do something here
    scanf(" %c", &answer); // update value of answer
}
```

## 2D While Loop

- Just a while loop where its body contains another loop

```c
int row = 0;
int col = 0;

while (row < MAX_ROW) {
    col = 0;
    while (col < MAX_COL) {
        print("Inner loop running, col = %d\n", col);
        col++;
    }
    printf("Outer loop running, row = %d\n", row);
    row++;
}
```

## Structs

- `struct` is short for structure, which is a user-defined
  data type allowing variables of different data types to be
  grouped under a single name
- When initializing a `struct`, all its fields must also be
  initialized

```c
struct coffee {
    enum coffee_type type;
    double num_sugars;
    char size;
};
```

## Enums

- `enum` is short for enumeration, which is a user-defined
  data type allowing a set of named constants to be grouped
  together
- Default value starts at 0 and increases by 1
- Values can also be specified

```c
enum coffee_type {
    LATTE,          // value = 0
    CAPPUCCINO,     // value = 1
    ESPRESSO,       // value = 2
    AMERICANO,      // value = 3
    MATCHA = 5      // value = 5
};
```

## `scanf` in a loop

- `scanf` will continue scanning from where it previously stopped
- This means you can give input to multiple `scanf` calls on the same line
- See [scanf.c](./scanf.c) for an example program (below)

```c
// THE CODE (See scanf.c)
char letter = '\0';
scanf(" %c", &letter);
printf("The character is %c\n", letter);
scanf(" %c", &letter);
printf("The character is %c\n", letter);

// EXAMPLE RUNTIME 1
> ./scanf
a
The character is a
b
The character is b

// EXAMPLE RUNTIME 2
> ./scanf
ab
The character is a
The character is b
```
