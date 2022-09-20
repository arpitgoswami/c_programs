// Simple program for a function example.
// Developed by Arpit

#include <stdio.h>

void wrt_very(int repeat) {
    while (repeat > 0){
        printf("\nHello World!");
        repeat--;
    };
}

int main() {

    int repeat = 0;
    printf("How many times should Hello World! be printed? ");
    scanf("%d", &repeat);
    printf("\nHello World!");

    repeat = repeat - 1; 
    wrt_very(repeat);
    return 0;
}