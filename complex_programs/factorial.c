// Simple program for the factorial of an integer quantity using recursion.
// Developed by Arpit

#include <stdio.h>

long int factorial(int n);

int main() {
    
    int n;
    long int factorial(int n);

    printf("n = ");
    scanf("%d", &n);

    //read in the integer quantity
    printf("n! = %ld\n", factorial(n));
    return 0;

}


long int factorial(int n) {
    if(n <= 1)
        return (1);
    else
        return (n * factorial( n - 1 ));
}   