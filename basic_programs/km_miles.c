/* Simple program to convert miles and yards into kilometers. */
/* Developed by Arpit */

#include <stdio.h>
#define mi 1.609344
#define ya 0.0009144

int main() {

    double yards, miles, kilometers;
    printf("Enter Miles: ");
    scanf("%lf", &miles);

    printf("Enter Yards: ");
    scanf("%lf", &yards);

    kilometers = (mi * miles) + (yards * ya);
    printf("\nThe total converted value is %lf", kilometers);
    return 0;
}