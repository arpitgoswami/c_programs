#include <stdio.h>
#include <stdlib.h>

// Global Variables
int num;
int temp;

void length() {
    printf("Enter the length of Array: ");
    scanf("%d", &num);
}

void show(char name[], int a[]) {
    printf("\n%s: ", name);
    for(int j = 0; j < num; j++) {  // Iterate till num
        printf("%d ", a[j]);
    }
}

void sort(int a[]) {
    for(int i = 0; i < num - 1; i++) {  // Proper initialization and bounds check
        for(int j = i + 1; j < num; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    length();

    // Dynamically allocate memory for array
    int *a = (int *)malloc(num * sizeof(int));
    
    if (a == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for(int i = 0; i < num; i++) {
        printf("Enter the Element: ");
        scanf("%d", &a[i]);
    }
    
    show("Unsorted Array", a);
    
    sort(a);
    
    show("Sorted Array", a);

    free(a); // Free dynamically allocated memory
    
    return 0;
}
