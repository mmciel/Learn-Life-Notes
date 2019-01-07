#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   int num,sum=0;
   int i=0,j,k;
   int m;
   int str[10];
   scanf("%d", &num);
   while(num>0)
   {
       str[i]=num%10;
       num=num/10;
       i++;
   }
   for(j=0;j<i;j++)
   {
       m=1;
       for(k=1;k<=j;k++)
       {
           m*=9;
       }
       if(str[j]<4)
        sum+=str[j]*m;
       if(str[j]>4)
        sum+=(str[j]-1)*m;
   }
   printf("%d\n", sum);
   return 0;
}
