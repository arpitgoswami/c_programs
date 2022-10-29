// Program for creating a integer pattern.
// Developed by Arpit.

#include <stdio.h>
int main() {

    int n;
    printf("Enter the upper limit number: ");
    scanf("%d", &n);
    printf("\n");

    if (n <= 9) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
            printf("\n");
        }
    }

    else {
        printf("The value of the upperlimit is more then the limit.");
    }

    return 0;
}