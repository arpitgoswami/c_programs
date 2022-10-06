// Program to simply check wheather the sequence is palidrome or not.
// Developed by Arpit.

#include <stdio.h>
int main() {
    int number = 123454321;
    int num = number;
    int rev = 0;
    int d;

    do {
        d = number % 10;
        rev = (rev * 10) + d;
        number = number/10;
    }
    while(number != 0);

    printf("Given Number: %d", num);
    printf("\nReversed Number: %d", rev);

    if(rev == num) {
        printf("\n\nThe given number is palidrome.");
    }

    else {
        printf("\n\nThe given number is not palidrome.");
    }
    
    return 0;
}