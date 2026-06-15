# Command Line Arguments (CLA) in C

---

## What are Command Line Arguments?

A **Command Line Argument (CLA)** is a value passed to a program when it is **executed from the terminal**. These arguments allow users to give input to the program **at runtime**, without using `scanf()` or any other input function.

---

## Syntax

```c
int main(int argc, char *argv[])
```

| Parameter | Full Name       | Description |
|-----------|-----------------|-------------|
| `argc`    | Argument Count  | Total number of arguments passed (including the program name itself) |
| `argv`    | Argument Vector | An array of strings — each element is one argument |

---

## How it Works

If you run your program like this:
```
./program hello world 42
```

Then inside `main`:

| Index      | Value         |
|------------|---------------|
| `argv[0]`  | `"./program"` |
| `argv[1]`  | `"hello"`     |
| `argv[2]`  | `"world"`     |
| `argv[3]`  | `"42"`        |
| `argc`     | `4`           |

---

## Basic Example

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Total arguments: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
```

**Run:** `./program apple banana`

**Output:**
```
Total arguments: 3
argv[0] = ./program
argv[1] = apple
argv[2] = banana
```

---

## Converting String Arguments to Numbers

All `argv` values are **strings**. Use conversion functions:

```c
#include <stdlib.h>

int num    = atoi(argv[1]);   // string → int
double val = atof(argv[1]);   // string → double
```

---

## Why Use CLAs?

| Scenario | Example |
|----------|---------|
| Pass a filename to process | `./reader myfile.txt` |
| Set a mode flag            | `./app --verbose`     |
| Pass numeric parameters    | `./sort 100`          |
| Automate with scripts      | No need to type input each run |
