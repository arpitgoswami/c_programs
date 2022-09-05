/* Simple program to add three different float values. */
/* Developed by Arpit */

#include <stdio.h>
int main(void) {

  float a, b, c, sum;

  printf("Enter three float values :");
  scanf("%f %f %f", &a, &b, &c);
  sum = a + b + c;

  printf("a = %f, b = %f, c = %f\n", a, b, c);
  printf("sum = %f\n\n", sum);

  return 0;
}