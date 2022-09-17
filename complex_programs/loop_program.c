// Simple program for loop structure linearity.
// Developed by Arpit

#include <stdio.h>
int main() {

    int blanks = 0, digits = 0, totalchars = 0;
    int c;

    for(; (c = getchar()) != EOF; totalchars ++) {

        if(c == ' ')
            ++blanks;

        else if(c >= '0' && c <= '9')
            ++digits;

    }

    printf("blanks = %d, digits = %d, totalchars = %d\n\n", &blanks, &digits, &totalchars);
    return 0;

}