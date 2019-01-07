#include <stdio.h>
int qh(int n)
{
    int sum = 0,m,k;
    while(n != 0)
    {
        k = n%10;
        n/=10;
        sum +=k;
    }
    if(sum<10)
        return sum;
    else
        qh(sum);
}
int main()
{
    int n,x;
    scanf("%d", &n);
    x = qh(n);
    printf("%d\n",x);


    return 0;
}
