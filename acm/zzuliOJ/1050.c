#include <stdio.h>


int main(void)
{
    int n,i;
    double sum=0.0,m=1.0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        m = m*i;
        sum = sum + m;
    }
    printf("%.0lf\n",sum);


    return 0;
}

