#include<stdio.h>

int main(void)
{
   int m, k, d=0;

   scanf("%d%d", &m, &k);


   while(m--)
   {

        d++;
       if(d % k == 0)
          m++;
   }

   printf("%d\n", d);

   return 0;
}
