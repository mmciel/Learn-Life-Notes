#include <stdio.h>

int main(void)
{
   int i, n, m;

   scanf("%d", &n);

   m = n;

   for(i=2;i<m; i++)
   {
       while(n%i == 0)
       {
           printf("%d",i);
           n = n/i;

            if(n==1)
                printf("\n");
            else
                printf(" ");

       }

   }


   return 0;
}
