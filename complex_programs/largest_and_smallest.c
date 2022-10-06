// Program to find the largest and smallest from an array.
// Developed by Arpit.

#include <stdio.h>
int main() {

    int array[10] = {11, 86, 3, 42, 55, 6, 7, 82, 2, 10};
    int size = sizeof(array)/ sizeof(int);

    int largest = array[0];
    int smallest = array[0];
    int average;
    int sum = 0;

    for(int i = 1; i < size; i++) {

        sum += array[i];

        if(largest <= array[i]) {
            largest = array[i];
        }

        else {
            continue;
        }
    }

    average = sum/size;

    for(int i = 1; i < size; i++) {
        if(smallest >= array[i]) {
            smallest = array[i];
        }

        else {
            continue;
        }
    }

    printf("The average of the array is: %d", average);
    printf("\nThe total sum of the array is: %d", sum);
    printf("\nThe smallest value from the array is: %d", smallest);
    printf("\nThe largest value from the array is: %d", largest);

    return 0;
}