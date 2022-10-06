// Program for linear search in a given array.
// Developed by Arpit.

#include <stdio.h>

int search_function(int array[], int size, int search) {

    for(int i = 0; i < size; i++) {
       
        if (array[i] == search) {
            return i;
        }
        
    }

    return -1;
}

int main() {

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array)/ sizeof(int);
    int search;

    printf("Enter the element to be searched for: ");
    scanf("%d", &search);

    int result = search_function(array, size, search);
    
    if(result == -1) {
        printf("The element is not present in the array.");
    }
    else {
        printf("The element is present on the index: %d", result);
    }

    return 0;
}