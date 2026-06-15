# Branching (Control Flow) in C

**Branching** refers to the decision-making process where the flow of program execution changes based on certain conditions. Instead of running instructions sequentially, the program can take different paths.

> *"The most common branching statements in C are `if`, `if-else`, `if-else if` ladder, and `switch`."*

---

## 1. `if` Statement

Executes a block **only if** the condition is true.

```c
if (condition) {
    // runs only when condition is true
}
```

**Example:**
```c
int age = 20;
if (age >= 18) {
    printf("You are an adult.\n");
}
```

---

## 2. `if-else` Statement

Chooses between two alternatives.

```c
if (condition) {
    // runs when condition is true
} else {
    // runs when condition is false
}
```

**Example:**
```c
int number = -5;
if (number > 0) {
    printf("Positive\n");
} else {
    printf("Not positive\n");
}
```

---

## 3. `if-else if` Ladder

Chains multiple conditions. Stops at the first true one.

```c
if (condition1) {
    // ...
} else if (condition2) {
    // ...
} else if (condition3) {
    // ...
} else {
    // runs if none above are true
}
```

---

## 4. Nested `if`

An `if` statement inside another `if`.

```c
if (condition1) {
    if (condition2) {
        // runs only if both condition1 and condition2 are true
    }
}
```

---

## 5. `switch` Statement

Best when you have **multiple options based on a single value**. More readable than a long `if-else if` chain.

```c
switch (expression) {
    case value1:
        // statements
        break;
    case value2:
        // statements
        break;
    // ...
    default:
        // runs if no case matches
}
```

> **Important:** Always use `break` to stop fall-through to the next case, unless fall-through is intentional.

---

## Summary Table

| Statement     | Best Used For |
|---------------|---------------|
| `if`          | Single condition check |
| `if-else`     | Binary (two-path) decision |
| `if-else if`  | Multiple related conditions |
| `nested if`   | Multiple independent conditions |
| `switch`      | One variable, many fixed values |
