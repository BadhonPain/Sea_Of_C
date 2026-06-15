#include <stdio.h>
#include <stdlib.h>

/*
 * null_and_dangling_pointers.c
 * Demonstrates: NULL pointer safety checks & dangling pointer hazards
 */

int main()
{
    /* ── 1. NULL Pointer ──────────────────────────────────────── */
    /*
     * NULL = a special value (0) meaning "points to nothing".
     * Always initialize pointers to NULL if not immediately assigned.
     * This prevents garbage-address bugs.
     */
    int *ptr = NULL;

    printf("=== NULL Pointer ===\n");
    printf("ptr = %p\n", (void *)ptr);   // prints 0x0 or (nil)

    // SAFE: always check before dereferencing
    if (ptr != NULL) {
        printf("Value: %d\n", *ptr);
    } else {
        printf("ptr is NULL — safe to skip dereferencing.\n\n");
    }

    /* ── 2. Valid pointer usage ───────────────────────────────── */
    int x = 42;
    ptr = &x;       // now points to a real variable

    printf("=== Valid Pointer ===\n");
    printf("ptr  = %p\n", (void *)ptr);
    printf("*ptr = %d\n\n", *ptr);

    /* ── 3. Dangling Pointer — WHAT NOT TO DO ────────────────── */
    /*
     * A DANGLING POINTER points to memory that has been freed or
     * gone out of scope. Accessing it causes UNDEFINED BEHAVIOR —
     * could crash, corrupt data, or appear to work (worst case).
     */
    printf("=== Dangling Pointer (demonstration) ===\n");

    int *dPtr = (int *) malloc(sizeof(int));
    if (dPtr == NULL) { printf("malloc failed\n"); return 1; }

    *dPtr = 99;
    printf("Before free: *dPtr = %d\n", *dPtr);

    free(dPtr);
    // dPtr is now a DANGLING pointer — memory was freed
    // Accessing *dPtr here is UNDEFINED BEHAVIOR!

    /* ── 4. THE FIX: Set to NULL immediately after free ──────── */
    dPtr = NULL;    // pointer is now safe — no longer dangling

    if (dPtr != NULL) {
        printf("Value: %d\n", *dPtr); // this won't run
    } else {
        printf("dPtr set to NULL after free — safe!\n\n");
    }

    /* ── 5. Pointer safety checklist ─────────────────────────── */
    /*
     *  ✅ Always initialize: int *p = NULL;
     *  ✅ Check before use:  if (p != NULL) { *p = ...; }
     *  ✅ After free:        free(p); p = NULL;
     *  ❌ Never:             dereference without checking (*p before NULL check)
     *  ❌ Never:             use a pointer after free() without setting to NULL
     *  ❌ Never:             return a pointer to a local variable
     */
    printf("=== Returning pointer to local var (WRONG EXAMPLE) ===\n");
    printf("Never return &local_var from a function!\n");
    printf("The local var is destroyed when function returns.\n");
    printf("The returned pointer would be dangling.\n");

    return 0;
}
