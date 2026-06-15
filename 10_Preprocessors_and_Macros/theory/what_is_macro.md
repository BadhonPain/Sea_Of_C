# Macros and Preprocessors in C

---

## What is a Macro?

A **macro** is a piece of code given a name. When the program is compiled, the **preprocessor** replaces the macro name everywhere in the code with its actual value or code — **before** compilation begins.

> Macros are defined using the `#define` directive and are handled during the **preprocessing stage**, not at runtime.

---

## Types of Macros

### 1. Object-like Macro (Constant Replacement)

Replaces a name with a constant value.

```c
#define PI 3.14159
#define MAX_SIZE 100
#define GRAVITY 9.8

int main() {
    double area = PI * 5 * 5;   // PI is replaced with 3.14159 before compile
    int arr[MAX_SIZE];           // MAX_SIZE replaced with 100
}
```

---

### 2. Function-like Macro

Works like a function but is pure **text substitution** — no function call overhead.

```c
#define SQUARE(x)   ((x) * (x))
#define MAX(a, b)   ((a) > (b) ? (a) : (b))
#define ABS(x)      ((x) < 0 ? -(x) : (x))

int main() {
    int a = 5;
    int b = SQUARE(a);     // expands to ((a) * (a)) = 25
    int m = MAX(3, 7);     // expands to ((3) > (7) ? (3) : (7)) = 7
}
```

> ⚠️ **Always wrap macro arguments in parentheses** to avoid operator precedence bugs:
> ```c
> #define BAD_SQUARE(x)  x * x         // BUG: SQUARE(1+2) → 1+2*1+2 = 5
> #define GOOD_SQUARE(x) ((x) * (x))   // OK:  SQUARE(1+2) → ((1+2)*(1+2)) = 9
> ```

---

## Predefined Macros

C provides built-in macros you can use anywhere:

| Macro        | Value                                      |
|--------------|--------------------------------------------|
| `__FILE__`   | Name of the current source file            |
| `__LINE__`   | Current line number                        |
| `__DATE__`   | Compilation date (`"Jun 15 2026"`)         |
| `__TIME__`   | Compilation time (`"18:00:00"`)            |
| `__func__`   | Name of the current function (C99+)        |

```c
#include <stdio.h>

int main() {
    printf("File: %s\n",  __FILE__);
    printf("Line: %d\n",  __LINE__);
    printf("Date: %s\n",  __DATE__);
    printf("Time: %s\n",  __TIME__);
    return 0;
}
```

---

## Macros vs Functions

| Feature         | Macro                         | Function                      |
|-----------------|-------------------------------|-------------------------------|
| Execution       | Text substitution at compile  | Actual function call at runtime |
| Speed           | ✅ Faster (no call overhead)   | Slightly slower               |
| Type safety     | ❌ None                        | ✅ Type-checked                |
| Debugging       | ❌ Harder to debug             | ✅ Easier to debug             |
| Code size       | ❌ Can increase binary size    | ✅ Single copy in binary       |

---

> **Rule of thumb:** Prefer `const` variables and `inline` functions over macros in modern C. Use macros mainly for compile-time constants and conditional compilation (`#ifdef`, `#ifndef`).
