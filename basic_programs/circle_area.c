/* Simple program to calculate the area of a circle. */
/* Developed by Arpit */

#include <stdio.h>
#define pi 3.14159

int main() {

    double area, radius;

    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = pi * radius * radius;

    printf("The circle with radius %lf is having the calculated area of %lf.", radius, area);
    return 0;

}