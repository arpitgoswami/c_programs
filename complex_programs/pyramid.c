// Program for creating a pyramid.
// Developed by Arpit.

#include <stdio.h>
int main() {

   int i;
   int num = 20;
   int n = 0;
   int temp = 0;
   int ispace = 0;

   for (int i = 1; i <= num;+ i++) {
      for (int j = 1; j <= i; j++) {

         temp = num - i;
         
         while (n != temp) {
            printf(" ");
            n++;
         }

         printf("%d", j);
      }

      for (int k = 1; k <= i-1; k++) {
         printf("%d", k);
      }

      n = 0;
      printf("\n");
   }
   
   return 0;
}