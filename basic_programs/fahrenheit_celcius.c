/* Simple program to convert fahrenheit into celcius. */
/* Developed by Arpit */

#include <stdio.h>

int main() {

    double fahrenheit, celcius;
    printf("Enter the value in fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celcius = (fahrenheit - 32) / 1.8;
    printf("The calculated value in celcius is equal to %lf", celcius);
    return 0;   
}