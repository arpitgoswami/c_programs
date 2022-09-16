// Simple program for the declaration assignment.
// Developed by Arpit

#include <stdio.h>
    int main() {

    int a = 5, b = 7, c = 6;                                    //declaration
    double average = 0.0;

    printf("a = %d, b = %d, c = %d\n", a, b, c);                //output
    average = (a + b + c) / 3.0;                                //conversion if 3

    printf("average = %f\n", average);
    return 0;
}