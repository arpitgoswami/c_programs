// Simple program for repetetion of a single string.
// Developed by Arpit

#include <stdio.h>
int main() {

    int repeat = 0;

    printf("How strong is your love 1 - 10:");
    scanf("%d", &repeat);
    printf("\nI love you very");
    
    while(repeat > 0) {

        printf("\nvery");
        repeat --;

    };

    printf("much\n\n");
    return 0;

}