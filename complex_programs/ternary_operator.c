// Simple program for the ternary operator.
// Developed by Arpit

#include <stdio.h>
int main() {

    int speed;
    printf("Enter your speed as integer: ");
    scanf("%d", &speed);
    // speed = (speed <= 65)?(65):(speed<=70)?(70):(90);

    switch(speed) {

        case 65: 
            printf("\nNo ticket is present.");
        case 70: 
            printf("\nSpeed ticket is present.");
        case 90: 
            printf("\nSpeed ticket is expensive one.");
        default:
            printf("\nIncorrect details are present");     

    }

    return 0;
}