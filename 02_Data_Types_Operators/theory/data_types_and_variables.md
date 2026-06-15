# Data Types and Variables in C

---

## Data Types in C

A **data type** tells the compiler what kind of data a variable will hold and how much memory to allocate.

### Primary Data Types

| Data Type | Size (bytes) | Description | Example |
|-----------|:------------:|-------------|---------|
| `int`     | 4            | Whole integer values | `5`, `-10`, `0` |
| `char`    | 1            | A single character | `'A'`, `'z'`, `'9'` |
| `float`   | 4            | Single-precision decimal | `3.14f`, `-0.5f` |
| `double`  | 8            | Double-precision decimal | `3.14159265` |

### Derived Data Types
Built from primary types:
- **Array** — A collection of same-type values
- **Pointer** — Stores a memory address
- **Structure** — Groups different types together

### Type Qualifiers

| Qualifier  | Effect |
|------------|--------|
| `signed`   | Can hold negative and positive values (default for `int`) |
| `unsigned` | Only non-negative values (doubles the positive range) |
| `short`    | Smaller integer, typically 2 bytes |
| `long`     | Larger integer, typically 8 bytes |

---

## Variables

A **variable** is a named memory location used to store data that can change during program execution.

### Naming Rules
1. Must start with a **letter** or **underscore** (`_`)
2. Can contain letters, digits, and underscores
3. **Case-sensitive** (`age` ≠ `Age`)
4. Cannot be a **reserved keyword** (e.g., `int`, `return`, `if`)

### Types of Variables

| Type       | Description |
|------------|-------------|
| `Local`    | Declared inside a function; accessible only within it |
| `Global`   | Declared outside all functions; accessible anywhere in the file |
| `Static`   | Retains its value between function calls |
| `Register` | Hints to compiler to store in a CPU register for faster access |

### Declaration and Initialization

```c
// Declaration (reserve memory)
int age;

// Initialization (assign a value)
age = 20;

// Declaration + Initialization in one step
int price = 100;
char grade = 'A';
float gpa = 3.85f;
double pi = 3.14159265358979;
```

---

## Quick Reference: Typical Sizes

```
Type            Size     Range (signed)
─────────────────────────────────────────────────
char              1      -128 to 127
short int         2      -32,768 to 32,767
int               4      -2,147,483,648 to 2,147,483,647
long int          8      Very large range
float             4      ±3.4 × 10^38  (6-7 decimal digits)
double            8      ±1.7 × 10^308 (15-16 decimal digits)
```
