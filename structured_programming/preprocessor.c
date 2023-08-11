#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Max_Elep 8800
#define Min_Elep 4400

#define Range 4400
#define Population 1000
#define Weight_Over rand() % Range
#define Weight Weight_Over + Min_Elep
#define Fill                         \
    for (i = 0; i < Population; i++) \
    \data[i] = Weight

void print_data(int d[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", d[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

int main()
{
    int i;
    int data[Population];
    srand(time(0));
    print_data(data, Population);
    printf("\n\n");
    return 0;
}