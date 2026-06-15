# Unions in C

---

## What is a Union?

A **union** is a special data type in C that allows storing **different data types in the same memory location**.

Unlike a `struct`, where each member has its **own separate storage**, in a union **all members share the same memory space**. The size of the union equals the size of its **largest member**.

> This means **only one member can hold a value at a time**.

---

## Syntax

```c
union UnionName {
    type1 member1;
    type2 member2;
    // ...
};
```

---

## struct vs union — Memory Comparison

```c
struct MyStruct {
    int   a;   // 4 bytes
    float b;   // 4 bytes
    char  c;   // 1 byte
};
// Total: 4 + 4 + 1 = 9 bytes (may be 12 with padding)

union MyUnion {
    int   a;   // 4 bytes
    float b;   // 4 bytes
    char  c;   // 1 byte
};
// Total: 4 bytes (size of the largest member)
```

---

## Example

```c
#include <stdio.h>

union Data {
    int   i;
    float f;
    char  str[20];
};

int main() {
    union Data d;

    d.i = 10;
    printf("d.i = %d\n", d.i);  // 10

    d.f = 3.14f;
    printf("d.f = %.2f\n", d.f);  // 3.14
    // NOTE: d.i is now corrupted — only d.f is valid!

    return 0;
}
```

---

## When to Use Unions

| Situation | Reason |
|-----------|--------|
| Only one value type is needed at a time | Saves memory |
| Implementing type-variant data structures | Flexible storage |
| Low-level hardware programming | Memory mapping |

---

> **Key Takeaway:** Unions save memory when you only ever need *one* of multiple fields at a given time. Always track which field is currently valid.
