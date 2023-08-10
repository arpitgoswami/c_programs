// Simple Calender Using C

#include <stdio.h>
enum day
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
};

void printday(int d)
{
    switch (d)
    {
    case sun:
        printf("Sunday");
        break;
    case mon:
        printf("Monday");
        break;
    case tue:
        printf("Tuesday");
        break;
    case wed:
        printf("Wednesday");
        break;
    case thu:
        printf("Thrusday");
        break;
    case fri:
        printf("Friday");
        break;
    case sat:
        printf("Saturday");
        break;
    }
}

int next_day(int d)
{
    return ((d + 1) % 7);
}

void main()
{

    printf("August 2023");
    printf("\n\n");
    printf("  S   M   T   W   T   F   S");
    printf("\n");

    int date = 1;
    int condition = 2;
    printf("        ");
    while (date != 32)
    {
        if (condition == 7)
        {
            condition = 0;
            printf("\n");
        }

        if (date <= 9)
        {
            printf("  %d ", date);
        }
        else
        {
            printf(" %d ", date);
        }

        date += 1;
        condition += 1;
    }

    printf("\n\n");

    condition = 2;
    date = 1;
    while (date != 32)
    {
        printf("%d - ", date);
        date += 1;
        printday(condition);
        printf("\n");
        condition = next_day(condition);
    }
}