// Simple program for evaluating the logical operators.
// Developed by Arpit

#include <stdio.h>
int main() {

    int outside, weather;
    printf("\n Enter if outside 1 true or 0 false: ");
    scanf("%d", &outside);

    printf("\n Enter if rain 1 true or 0 false: ");
    scanf("%d", &weather);

    if (outside && weather) {
        printf("\n Please use an umbrella.");
    }

    else {
        printf("\n Dress normally");
    }

    return 0;
    
}