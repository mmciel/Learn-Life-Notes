#include <stdio.h>

int main(void)
{
   int k, i;
   double sn=0.0;
   scanf("%d", &k);

   for(i=1; ;++i)
   {
       sn = sn + 1.0/i;

       if(sn>k)
       {
           break;
       }

   }
   printf("%d", i);


   return 0;
}

