#include <stdio.h>

int main(viod)
{
     int i, j, k, n, bjbl;

     scanf("%d",&n);

     bjbl=0;

     for(i=0; i<=n/5; i++)
     {
         for(j=0; j<=n/3; j++)
         {
             k = n - i - j;
             if(i*15+j*9+k == n*3)
             {
                 printf("%4d%4d%4d\n", i, j, k);

                 bjbl=1;
             }
         }
     }
     if(bjbl==0)
        printf("No Answer");

    return 0;
}
