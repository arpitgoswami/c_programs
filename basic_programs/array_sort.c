// Program to simply sort a given array.
// Developed by Arpit.

#include <stdio.h>
int main() {
    
    int num[] = {0, 23, 14, 12, 9, 25, 2};
    int size = sizeof(num)/ sizeof(int);
    int temp;

    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {

            if (num[i] >= num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }

        }
    }
    
    printf("The sorted array is: ");

    for(int i = 0; i <= size-1; i++) {
        printf("\t%d", num[i]);
    }

    return 0;
}