#include<stdio.h>
int main()
{
   int n,i;
   double x;

   scanf("%d",&n);

   x=1.0;  ///网上找的算法
   /*原理：每当结果超过10的时候，把十位变成个位，可以把最高位变为个位处理，而后面的数字要溢出就溢出，不用管，因为没用。*/

   for(i=1;i<=n;i++)
   {
       x=x*i;
       while(x>=10)
       {
         x=x/10;
       }
   }
   printf("%.0lf",x);
}
