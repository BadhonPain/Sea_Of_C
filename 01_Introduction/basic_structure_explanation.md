# Explanation of a Basic C Program

> *Explanation inspired by: **Prof. Dr. Ashikur Rahman**, Department of CSE, BUET*

---

## The Source Code

```c
#include <stdio.h>

int main()
{
    printf("Starlight is old lies.\n");
    return 0;
}
```

---

## Line-by-Line Breakdown

### 1. `#include <stdio.h>`

| Part | Meaning |
|------|---------|
| `#include` | A **preprocessor directive** — an instruction for the compiler *before* it builds the program. It says: *"Go grab this file and include its contents right here."* |
| `<stdio.h>` | Stands for **Standard Input/Output header**. It contains declarations for functions like `printf` (print to screen) and `scanf` (read user input). |

---

### 2. `int main()`

| Part | Meaning |
|------|---------|
| `int` | The **return type** of the function. This function must return an integer when done. The OS uses this value to determine if the program ran successfully. |
| `main` | The **entry point** of every C program. The OS always starts execution from `main`. |
| `()` | The parentheses hold **parameters (inputs)** for the function. Empty here means no parameters. |

---

### 3. `{ }` — Curly Braces

- `{` marks the **beginning** of the `main` function's body.
- `}` marks the **end** of the `main` function's body.
- Everything between them is the function's code block.

---

### 4. `printf("Starlight is old lies.\n");`

| Part | Meaning |
|------|---------|
| `printf` | Stands for **"print formatted"**. Prints text to the terminal/console. |
| `"..."` | Double quotes wrap a **string** (a piece of text). |
| `\n` | An **escape sequence** for a newline character — like pressing Enter. Moves the cursor to the next line. |
| `;` | The **semicolon** ends a statement in C — like a period at the end of a sentence. |

> **In simple terms:** This line tells the computer to print *"Starlight is old lies."* to the screen and then go to a new line.

---

### 5. `return 0;`

| Part | Meaning |
|------|---------|
| `return` | A keyword that **exits the function** and gives back a value. |
| `0` | By convention, returning `0` signals to the OS that the program **finished successfully**. Any non-zero value typically indicates an error. |

> **In simple terms:** The last instruction of the program — telling the OS *"Everything went okay!"*

---

## Summary

These five parts — `#include`, `main`, `{}`, `printf`, `return 0` — are the **basic and required building blocks** of every C program.

```
#include <stdio.h>   ← Import tools (header file)
int main()           ← Entry point
{                    ← Start of code block
    printf(...);     ← Do something
    return 0;        ← Signal success to OS
}                    ← End of code block
```
