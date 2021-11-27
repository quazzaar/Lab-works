#include <stdio.h>
#include "parallelogram.h"

int main()
{
    struct Parallelogram p;

    printf("Enter first coordinates:");
    scanf("%f %f", &p.x1, &p.y1);
    printf("Enter second coordinates:");
    scanf("%f %f", &p.x2, &p.y2);
    printf("Enter third coordinates:");
    scanf("%f %f", &p.x3, &p.y3);
    printf("Enter fourth coordinates:");
    scanf("%f %f", &p.x4, &p.y4);

    printf("Perimeter: %.2f\n", getPerimeter(p));
    printf("Area: %.2f\n", getArea(p));

    return 0;
}
