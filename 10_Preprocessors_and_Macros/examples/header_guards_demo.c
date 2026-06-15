#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "header_guards_demo.h" // include our header
#include "header_guards_demo.h" // included AGAIN — would break WITHOUT guards!
#include "header_guards_demo.h" // and again — perfectly safe WITH guards

/*
 * header_guards_demo.c
 * Implements the functions declared in header_guards_demo.h
 * Demonstrates that triple-including the header causes NO errors.
 *
 * HOW HEADER GUARDS WORK:
 *
 *   #ifndef HEADER_GUARDS_DEMO_H   ← "If this macro is NOT defined..."
 *   #define HEADER_GUARDS_DEMO_H   ← "...define it now (mark as included)"
 *   ... header content ...
 *   #endif                         ← "End of the guarded block"
 *
 *   On first include:  macro not defined → enter block → define macro → content included
 *   On second include: macro IS defined  → skip block entirely → no duplication
 *
 * MODERN ALTERNATIVE: #pragma once
 *   Many compilers also support:  #pragma once  (at the top of the header)
 *   It achieves the same goal but is NOT in the C standard (widely supported though).
 */

/* ── Function Implementations ─────────────────────────────────── */

double area_circle(Circle c)
{
    return M_PI * c.radius * c.radius;
}

double perimeter_circle(Circle c)
{
    return 2.0 * M_PI * c.radius;
}

double area_rectangle(Rectangle r)
{
    return r.width * r.height;
}

double perimeter_rectangle(Rectangle r)
{
    return 2.0 * (r.width + r.height);
}

/* ── Main: Using the header's structs and functions ───────────── */

int main()
{
    printf("=== Header Guards Demo ===\n");
    printf("(header included 3 times -- zero errors because of guards!)\n\n");

    /* Circle */
    Circle c;
    printf("Enter circle radius: ");
    scanf("%lf", &c.radius);
    printf("Circle Area      : %.4f\n", area_circle(c));
    printf("Circle Perimeter : %.4f\n\n", perimeter_circle(c));

    /* Rectangle */
    Rectangle r;
    printf("Enter rectangle width and height: ");
    scanf("%lf %lf", &r.width, &r.height);
    printf("Rectangle Area      : %.4f\n", area_rectangle(r));
    printf("Rectangle Perimeter : %.4f\n\n", perimeter_rectangle(r));

    printf("MAX_SHAPES constant from header = %d\n", MAX_SHAPES);

    return 0;
}
