// Simple program for printing the fibonacci series.
// Developed by Arpit

#include<stdio.h>

long int a = 0, b = 1, temp;
int times;

int func(int condition) {

    int cond = 2;

    while (cond != condition) {
        temp = a + b;
        printf("\nValue     %d", temp);
        a = b;
        b = temp;
        cond ++;
    };

    return 0;
}

int main() {

    printf("To which no. should the fibonacci series be printed: ");
    scanf("%d", &times);

    printf("\nValue     %d", a);
    printf("\nValue     %d", b);
    func(times);

}