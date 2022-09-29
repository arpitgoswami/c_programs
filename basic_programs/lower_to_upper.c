// Simple program for converting the lower case letters to the upper case.
// Developed by Arpit

#include <stdio.h> 

char lower_to_upper (char c1) {

    char c2;
    c2 = (c1 >= 'a' && c1 <= 'z') ? ('A' + c1 - 'a'):c1;
    return (c2);

}

int main () {

    char lower, upper;
    printf("Please enter a lowercase character: ");
    scanf("%c", &lower);
    
    upper = lower_to_upper(lower);
    printf("\n The uppercase equivalent is %c\n\n", upper);

    return 0;

}