# Operators in C

An **operator** is a symbol that tells the compiler to perform a specific mathematical or logical operation.

---

## 1. Arithmetic Operators

Used for basic math operations.

| Operator | Name           | Example | Result |
|:--------:|----------------|---------|--------|
| `+`      | Addition       | `5 + 3` | `8`    |
| `-`      | Subtraction    | `5 - 3` | `2`    |
| `*`      | Multiplication | `5 * 3` | `15`   |
| `/`      | Division       | `10 / 3`| `3` (integer division) |
| `%`      | Modulus        | `10 % 3`| `1` (remainder) |

```c
int a = 10, b = 3;
printf("%d", a + b); // 13
printf("%d", a % b); // 1
```

---

## 2. Relational Operators

Compare two values. Return `1` (true) or `0` (false).

| Operator | Meaning                  | Example   |
|:--------:|--------------------------|-----------|
| `==`     | Equal to                 | `a == b`  |
| `!=`     | Not equal to             | `a != b`  |
| `>`      | Greater than             | `a > b`   |
| `<`      | Less than                | `a < b`   |
| `>=`     | Greater than or equal to | `a >= b`  |
| `<=`     | Less than or equal to    | `a <= b`  |

```c
if (a > b) { printf("a is greater"); }
```

---

## 3. Logical Operators

Combine multiple conditions.

| Operator | Name | Example | Meaning |
|:--------:|------|---------|---------|
| `&&`     | AND  | `a > 0 && b > 0` | Both must be true |
| `\|\|`   | OR   | `a > 0 \|\| b > 0` | At least one must be true |
| `!`      | NOT  | `!a`    | Inverts the truth value |

```c
if (a > 0 && b > 0) { printf("Both positive"); }
```

---

## 4. Assignment Operators

Assign or update variable values.

| Operator | Equivalent to  |
|:--------:|----------------|
| `=`      | `a = 5`        |
| `+=`     | `a = a + 5`    |
| `-=`     | `a = a - 5`    |
| `*=`     | `a = a * 5`    |
| `/=`     | `a = a / 5`    |
| `%=`     | `a = a % 5`    |

---

## 5. Increment & Decrement Operators

| Operator | Type           | Effect |
|:--------:|----------------|--------|
| `a++`    | Post-increment | Use `a`, then add 1 |
| `++a`    | Pre-increment  | Add 1, then use `a` |
| `a--`    | Post-decrement | Use `a`, then subtract 1 |
| `--a`    | Pre-decrement  | Subtract 1, then use `a` |

---

## 6. Conditional (Ternary) Operator

A compact alternative to `if-else`.

```
result = (condition) ? value_if_true : value_if_false;
```

```c
int max = (a > b) ? a : b; // if a>b then max=a, else max=b
```

---

## 7. Bitwise Operators

Operate on the binary representation of integers.

| Operator | Name         | Example (`a=5` = `0101`) |
|:--------:|--------------|--------------------------|
| `&`      | Bitwise AND  | `5 & 3` = `0101 & 0011` = `0001` = `1` |
| `\|`     | Bitwise OR   | `5 \| 3` = `0101 \| 0011` = `0111` = `7` |
| `^`      | Bitwise XOR  | `5 ^ 3` = `0101 ^ 0011` = `0110` = `6` |
| `~`      | Bitwise NOT  | `~5` = `-6` |
| `<<`     | Left shift   | `5 << 1` = `1010` = `10` |
| `>>`     | Right shift  | `5 >> 1` = `0010` = `2` |
