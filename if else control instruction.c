#include <stdio.h>

int main()
{
   int x ;
   printf("enter the x= ");
   scanf("%d",&x);

   if (x > 0 && x < 9)
      {
         printf("x is equal to one.\n");
      }
   else
      {
         printf("x is not equal to one.\n");
      }
   return 0;
}
