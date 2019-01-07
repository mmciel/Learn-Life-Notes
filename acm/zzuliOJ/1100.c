#include <stdio.h>

int fact(int n)
{
    int i;
    int sum = 1;
    for(i=1;i<=n;++i)
    {
        sum = sum * i;
    }
    return sum;
}

int main()
{
    int m, n, i,k;
    scanf("%d%d",&m,&k);
    n = fact(m)/(fact(k)*fact(m-k));
    printf("%d",n);

    return 0;
}
