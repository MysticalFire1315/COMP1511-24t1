# COMP1511 Tutorial 02

## Variables

- Needs to be declared and initialized
  - Declaration: `data_type variable_name;`
  - Initialization: `variable_name = value;`
  - Can be done in the same step: `data_type variable_name = value;`
- Values may be changed after initialization

### Data Types

- `int`
  - An integer (whole number)
  - Format specifier: `%d`
  - Can be positive or negative
- `char`
  - A character (letter or symbol)
  - Format specifier: `%c`
  - Stored as an integer ASCII value
  - Use single quotes
- `double`
  - A decimal number
  - Format specifier: `%lf`
  - Can have as many or as little decimal places as you want
  - Can be positive or negative

```c
////////////////////////////////////
// Declaration and Initialization //
////////////////////////////////////

// Integers
int n1 = 0;
int n2 = -213;

// Characters
char l1 = 'a';
char l2 = '*';
char l3 = '\n';
char l4 = 65;     // Don't do this (= 'A')

// Doubles
double d1 = 1.0;
double d2 = 3.14159;
double d3 = -123.456;

////////////////////////////////////
////// Printing and Scanning ///////
////////////////////////////////////

// Integers
printf("%d\n", n1);
scanf("%d\n", n2);

// Characters
printf("%c\n", l1);
scanf("%c\n", l2);

// Doubles
printf("%lf\n", d1);   // Prints out all decimal places
printf("%.2lf\n", d2); // Prints up to 2 decimal places
scanf("%lf\n", d3);
```

## Constants

- Essentially are variables whose value never change.
- Name of constants should always be in capital letters.
- Declared at the top of the program using `#define NAME value`

```c
#define PI 3.14159
#define NUM_ALPHABET 26
#define MONDAY 'm'
```

## Operators

| Type of Operator | Operators         |
| ---------------- | ----------------- |
| Arithmetic       | `+ - * / %`       |
| Logic            | `&& \|\| !`       |
| Comparison       | `< > <= >= != ==` |

## Arithmetic

### Order of Operations

- Similar to maths in terms of brackets, multiplication/division, then addition/subtraction.
- If there is a double in either operand, the result will be a double.
  - Eg. `3.0 / 2` has a double (`3.0`) hence the result will be a double (`1.5`)

### Examples

- `(7 / 2) = 3`
  - Both operands are integers, hence result is also an integer
- `(3.0 / 2) + 1 = 2.5`
  - Division is calculated first
  - Division involves a double in the operands hence result is a double (`3.0 / 2.0 = 1.5`)
- `'a' + 5 = 'f'`
  - Characters are stored as ASCII integers, so arithmetic occurs treating them as integers
  - Here `'a' = 97`, so `97 + 5 = 102`, and in ASCII `102 = 'f'`
- `'F' - 'A' + 'a' = 'f'`
  - Similar to previous example, convert all characters to ASCII integers to perform calculation
  - `70 - 65 + 97 = 102`
  - Convert result back to ASCII character

## Diagramming

![Diagram Example](./diagram_example.svg)

```txt
Print "Do you like puns?"
scan input
if yes:
    print "Do you like computers more than books?"
    scan input
    if yes:
        print "You will be glas to C this pun, then."
    else:
        print "I hope the police book you fro saying that"
else:
    print "That's pUnfortunate."
```
