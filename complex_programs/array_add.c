// Simple program for the addtion finding in an array.
// Developed by Arpit

#include <stdio.h>

int array[5] = {1, 2, 3, 4, 5};
int size = sizeof(array) /sizeof(int);

int j = 0;
int i = 0;

int func() {

    int sum = 8;
    int temp = 0;

     for(i = 0; i <= size; i++){
        for(j = 0; j <= size; j++){

            temp = array[i] + array[j];

            if(temp == sum) {
                printf("\n%d + %d = %d", array[i], array[j], sum);
                printf("\nThe additive factors are %d and %d respectively", array[i], array[j]);
                return 0;
            }

            else {
                continue;
            }
        }
    }

}

int main() {

    func();

    
    return 0;
}
