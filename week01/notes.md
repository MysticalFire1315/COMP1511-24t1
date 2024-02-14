# COMP1511 Tutorial 01

## Linux commands

| Command       | Purpose                                       |
| ------------- | --------------------------------------------- |
| `cd`          | Open a directory                              |
| `cd ..`       | Go back to the parent directory               |
| `ls`          | List the contents of a directory              |
| `mkdir`       | Make (create) a new directory                 |
| `code <file>` | Open/create a file                            |
| `rm`          | Remove a file                                 |
| `rmdir`       | Remove a directory                            |
| `mv`          | Move a file/directory (can be used to rename) |
| `cp`          | Copy a file                                   |
| `touch`       | Create an empty file                          |

## C code features

### Comments

- Anything after `//` is treated as a comment
- Comments are ignored by the compiler
- Generally used to explain a piece of code

### Escape sequences

- `\` followed by a single character forms an "escape sequence"
- These have special meanings when printing
- Some common examples are:
  - `\n` - newline
  - `\\` - literal `\` character
  - `\t` - tab (differs from machine to machine)

### Main function

- Required for the program to compile and run
- For now every program you write should follow this structure

```c
// Header comment
// This should include your name, zid, date
// as well as a short description of the program

int main(void) {
    // Code here

    return 0;
}
```
