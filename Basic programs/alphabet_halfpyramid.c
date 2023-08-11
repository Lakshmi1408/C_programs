#include <stdio.h>
int main() {
   int i, j;
   char input, v = 'A';
   printf("Enter an uppercase character: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ",v);
      }
      ++v;
      printf("\n");
   }
   return 0;
}

