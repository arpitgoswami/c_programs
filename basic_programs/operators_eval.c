// Simple program for the evaluation of operators.
// Developed by Arpit

#include <stdio.h>
int main() {

    int a = 5, b = 7, c = 0, d = 0;
    c = a - b;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = a/b;
    d = b/a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = a % b;
    d = b % a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = -a - b;
    d = -b - a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    c = ++a + b++;
    d += 5;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}