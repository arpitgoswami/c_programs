// Simple program for the factorial of an integer quantity using recursion.
// Developed by Arpit

#include <stdio.h>
#include <math.h>

float x, y, z;
float discriminant, sum; 
float root;

float temp, temp2;
float r1, r2;

int done() {
    
    printf("\nReal roots are present");
    printf("\n%f %f", discriminant , sum);
    root = sqrt(discriminant - sum);
    printf("\nValue of square root: %f", root);

    temp = 2 * x;
    r1 = (y - root)/temp;
    r2 = (y + root)/temp;

    printf("\nThe value of first root is: %f", -r1);
    printf("\nThe value of second root is: %f", -r2);


    return 0;
}

int main() {
    
    printf("Enter the values of x, y, z simutaneously: ");
    scanf("%f %f %f", &x, &y, &z);
    
    discriminant = (y*y);
    sum = 4 * x * z;

    printf("values: x = %f y = %f z = %f discriminant = %f sum = %f", x , y, z, discriminant, sum);

    if (discriminant > sum)
        done();
    else
        printf("\nNo real roots are present");

    return 0;

}