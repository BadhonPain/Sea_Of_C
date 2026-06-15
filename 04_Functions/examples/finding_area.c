#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 22 / 7.0

void print_Welcome_message()
{
    printf("Welcome to the Area Calculator!\n");
    printf("You can calculate the area of different shapes.\n");
    printf("If you want to stop calculating just type 'None' instead of any shape.\n");
    printf("Available shapes:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Square\n");
}

float area_Rectangle(float length, float width)
{
    printf("The area of the Rectangle is %f\n", length * width);
    return length * width;
}
float area_Circle(float radius)
{
    printf("The area of the Circle is %f\n", PI * pow(radius, 2));
    return PI * pow(radius, 2);
}
float area_Triangle(float base, float height)
{
    printf("The area of the Triangle is %f\n", 0.5 * base * height);
    return 0.5 * base * height;
}
float area_Square(float side)
{
    printf("The area of the Square is %f\n", pow(side, 2));
    return pow(side, 2);
}

int main()
{
    print_Welcome_message();
    char shape[20];
    float length, width, radius, side, base, height;
    while (1)
    {
        printf("Choose a shape to calculate it's area: ");
        scanf("%s", shape);
        if (strcmp(shape, "Rectangle") == 0)
        {
            printf("Enter length & width : ");
            scanf("%f %f", &length, &width);
            area_Rectangle(length, width);
        }
        else if (strcmp(shape, "Circle") == 0)
        {
            printf("Enter radius : ");
            scanf("%f", &radius);
            area_Circle(radius);
        }
        else if (strcmp(shape, "Triangle") == 0)
        {
            printf("Enter base & height : ");
            scanf("%f %f", &base, &height);
            area_Triangle(base, height);
        }
        else if (strcmp(shape, "Square") == 0)
        {
            printf("Enter side : ");
            scanf("%f", &side);
            area_Square(side);
        }
        else if (strcmp(shape, "None") == 0)
        {
            break;
        }
        else
        {
            printf("Invalid Shape. Enter a regular shape\n");
        }
    }

    return 0;
}