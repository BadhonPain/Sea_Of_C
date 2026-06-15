# Enumerations (enum) in C

---

## What is an enum?

An **enumeration** (`enum`) is a user-defined data type in C used to assign **descriptive names to a set of related constant integer values**.

Instead of remembering that `5` means Friday, you can write `FRIDAY` — making code far more readable and meaningful.

---

## Syntax

```c
enum EnumName {
    CONSTANT1,   // = 0 by default
    CONSTANT2,   // = 1
    CONSTANT3,   // = 2
    // ...
};
```

> The first constant defaults to `0`, and each subsequent constant increases by `1` automatically. You can override these values explicitly.

---

## Example: Days of the Week

```c
#include <stdio.h>

enum Day {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main() {
    enum Day today = FRIDAY;
    printf("Day number: %d\n", today); // Output: 5

    if (today == FRIDAY) {
        printf("Weekend is almost here!\n");
    }
    return 0;
}
```

---

## Custom Values

You can assign any integer value manually:

```c
enum Status {
    PENDING  = 1,
    APPROVED = 10,
    REJECTED = 20,
    ON_HOLD  = 30
};
```

---

## enum vs #define

| Feature       | `enum`                      | `#define`                     |
|---------------|-----------------------------|-------------------------------|
| Type safety   | ✅ Has a type (`enum Name`)  | ❌ Just text substitution     |
| Debugger support | ✅ Names visible in debugger | ❌ Replaced before compile  |
| Grouping      | ✅ Naturally groups constants | ❌ No grouping                |

---

## Common Use Cases

| Use Case           | Example Enum                          |
|--------------------|---------------------------------------|
| Days of the week   | `SUN, MON, TUE, ...`                  |
| Months of the year | `JAN=1, FEB, MAR, ...`                |
| Traffic lights     | `RED, YELLOW, GREEN`                  |
| HTTP status codes  | `OK=200, NOT_FOUND=404, ERROR=500`    |
| Game states        | `MENU, PLAYING, PAUSED, GAME_OVER`    |

---

> **Key Takeaway:** Use `enum` whenever you have a fixed set of related named constants. It makes your code self-documenting and reduces magic numbers.
