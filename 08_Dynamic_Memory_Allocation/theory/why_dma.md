# Why Dynamic Memory Allocation (DMA)?

---

## The Problem with Static Arrays

When you declare `int arr[n];` and take `n` as user input, this is a **Variable Length Array (VLA)**.

VLAs are allocated on the **stack**, which is typically small. If `n` is very large, the program may **crash** or cause a **segmentation fault**.

Additionally, **not all compilers support VLAs**:
- ✅ GCC, Clang — supported from C99 onwards
- ❌ MSVC — does not support VLAs

This causes inconsistent behavior across systems.

---

## The Heap vs The Stack

| Feature         | Stack              | Heap                    |
|-----------------|--------------------|-------------------------|
| Size            | Small (~1–8 MB)    | Large (limited by RAM)  |
| Allocation      | Automatic          | Manual (`malloc`, etc.) |
| Lifetime        | Until function ends| Until you call `free()` |
| Speed           | Very fast          | Slightly slower         |
| Risk            | Stack overflow     | Memory leaks            |

---

## The Four DMA Functions

### `malloc()` — Allocate Raw Memory
Allocates a block of `n` bytes on the heap. **Does NOT initialize** the memory (contains garbage values).

```c
int *ptr = (int *) malloc(n * sizeof(int));
if (ptr == NULL) { /* allocation failed */ }
```

---

### `calloc()` — Allocate & Zero-Initialize
Takes **two arguments**: number of elements and size of each element.
**Initializes all memory to zero** — prevents garbage values.

```c
int *ptr = (int *) calloc(n, sizeof(int));
// All elements are guaranteed to be 0
```

---

### `realloc()` — Resize Allocated Memory
Resizes a previously allocated memory block. If the new size is larger, it may **move the block** to a new location and copy existing data automatically.

```c
ptr = (int *) realloc(ptr, new_size * sizeof(int));
```

---

### `free()` — Deallocate Memory
Releases memory back to the OS. **Always free what you allocate** to avoid memory leaks.

```c
free(ptr);
ptr = NULL; // Best practice: set to NULL after freeing
            // Prevents accidental access to freed memory (dangling pointer)
```

---

## Summary

```
Stack  →  Fast, automatic, small, temporary
Heap   →  Manual, large, persistent until freed

malloc  →  Allocate (raw/garbage)
calloc  →  Allocate + initialize to zero
realloc →  Resize existing block
free    →  Deallocate (always do this!)
```

> **Rule:** For every `malloc`/`calloc`/`realloc`, there must be a corresponding `free()`.
