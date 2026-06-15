# Recursion in C

---

## What is Recursion?

**Recursion** is when a function **calls itself** to solve a smaller version of the same problem, until it reaches a simple base case it can solve directly.

Think of it like Russian nesting dolls — each doll contains a smaller version of itself, until you reach the smallest one that contains nothing.

---

## Anatomy of a Recursive Function

Every correct recursive function has **two essential parts**:

```
1. Base Case  → The stopping condition. Without this, you get infinite recursion (stack overflow!).
2. Recursive Case → The function calls itself with a simpler/smaller input, moving toward the base case.
```

```c
return_type function(parameters) {
    // 1. Base Case — stop recursion
    if (base_condition) {
        return base_value;
    }
    // 2. Recursive Case — call itself with smaller problem
    return function(smaller_problem);
}
```

---

## Classic Example: Factorial

**Factorial** of `n` = `n × (n-1) × (n-2) × ... × 1`

```
5! = 5 × 4! = 5 × 4 × 3! = 5 × 4 × 3 × 2! = 5 × 4 × 3 × 2 × 1! = 120
```

```c
#include <stdio.h>

int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

int main() {
    printf("5! = %d\n", factorial(5)); // Output: 120
    return 0;
}
```

---

## How the Call Stack Works

Each function call is pushed onto the **call stack**. When a base case is reached, results are returned back up through each frame:

```
factorial(5)
  └─► 5 * factorial(4)
            └─► 4 * factorial(3)
                      └─► 3 * factorial(2)
                                └─► 2 * factorial(1)
                                          └─► returns 1   ← BASE CASE
                                return 2 * 1  = 2
                      return 3 * 2  = 6
            return 4 * 6  = 24
  return 5 * 24 = 120
```

---

## Example 2: Fibonacci Sequence

```
fib(0)=0, fib(1)=1, fib(n) = fib(n-1) + fib(n-2)
```

```c
int fibonacci(int n) {
    if (n == 0) return 0;       // Base case 1
    if (n == 1) return 1;       // Base case 2
    return fibonacci(n-1) + fibonacci(n-2); // Recursive case
}
```

---

## Example 3: Sum of N Natural Numbers

```c
int sum(int n) {
    if (n == 0) return 0;       // Base case
    return n + sum(n - 1);      // Recursive case
}
// sum(4) → 4 + sum(3) → 4 + 3 + sum(2) → ... → 10
```

---

## Recursion vs Iteration

| Feature       | Recursion                         | Iteration (loops)              |
|---------------|-----------------------------------|--------------------------------|
| Readability   | ✅ Often cleaner for tree/math problems | More verbose sometimes    |
| Memory        | ❌ Uses call stack (risk of overflow) | ✅ Uses constant memory      |
| Speed         | ❌ Function call overhead          | ✅ Generally faster            |
| Best for      | Trees, graphs, divide & conquer   | Simple loops, counters         |

---

## ⚠️ Common Mistakes

1. **Missing base case** → Infinite recursion → Stack overflow crash
2. **Base case never reached** → Check your logic reduces toward the base case
3. **Too deep recursion** → For large inputs, consider iteration or memoization

---

> **Golden Rule:** If you can clearly see a problem as *"solve a smaller version of itself"*, recursion is the right tool.
