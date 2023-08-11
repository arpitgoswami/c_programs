#include <stdio.h>
#include <assert.h>

void main()
{
    double x, y;
    while (1)
    {
        printf("\nRead 2 Floats \n");
        scanf("%lf %lf", &x, &y);
        assert(y != 0);
        printf("Division x/y = %lf", x / y);
    }
}