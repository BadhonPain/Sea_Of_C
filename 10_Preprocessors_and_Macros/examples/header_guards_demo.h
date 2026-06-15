#ifndef HEADER_GUARDS_DEMO_H
#define HEADER_GUARDS_DEMO_H

/*
 * header_guards_demo.h
 * Demonstrates: Header guards — preventing double-inclusion errors
 *
 * WITHOUT header guards, if two .c files both include this header,
 * or if this header is included multiple times, you get:
 *   "error: redefinition of struct Circle"
 *   "error: redefinition of function area_circle"
 *
 * WITH #ifndef / #define / #endif guards, the compiler includes
 * the contents ONLY ONCE, no matter how many times it's #included.
 *
 * Flow:
 *   1st inclusion → #ifndef HEADER_GUARDS_DEMO_H is TRUE  → include contents, define the macro
 *   2nd inclusion → #ifndef HEADER_GUARDS_DEMO_H is FALSE → skip everything (already defined)
 */

#include <math.h>   // for M_PI

/* ── Constant defined in header ───────────────────────────────── */
#define MAX_SHAPES 100

/* ── Struct defined in header ─────────────────────────────────── */
typedef struct {
    double radius;
} Circle;

typedef struct {
    double width;
    double height;
} Rectangle;

/* ── Function declarations (prototypes) ──────────────────────── */
double area_circle(Circle c);
double area_rectangle(Rectangle r);
double perimeter_circle(Circle c);
double perimeter_rectangle(Rectangle r);

#endif  /* HEADER_GUARDS_DEMO_H */
