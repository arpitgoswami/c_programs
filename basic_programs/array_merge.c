// Program to simply merge two arrays.
// Developed by Arpit.

#include <stdio.h>

int array_index1 = 0;
int array_index2 = 0;
int array_3[10];
int size = sizeof(array_3)/ sizeof(int);

int func(int array[]) {
     while(array_index1 < size) {
        array_3[array_index1] = array[array_index2];
        array_index1 += 1;
        array_index2 += 1;
    }
    array_index2 = 0;
    return 0;
}

int main() {

    int array_1[5] = { 1, 2, 3, 4, 5 };
    int array_2[5] = { 6, 7, 8, 9, 10 };

    func(array_2);
    func(array_1);

    printf("The merged array is: ");

    for(int i = 0; i <= size - 1; i++) {
        printf("\t%d", array_3[i]);
    }

    return 0;
}
