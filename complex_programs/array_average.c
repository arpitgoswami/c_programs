// Simple program for average from the arrays.
// Developed by Arpit

#include<stdio.h>
int main() {
    const int size = 5;
    int grades[5] = {1, 2, 3, 4, 5};

    double sum = 0.0;
    int i;

    printf("\nMy grades are:    ");

    for (i=0; i<size; ++i) {
        printf("%d\t", grades[i]);
    };

    for (i=0; i<size; ++i) {
        sum = sum + grades[i];
    };

    printf("\nMy average is:    %.2f\n\n", sum/size);
    return 0;
}