#include <stdio.h>


int main(void)
{
    int n,i;
    double sum=1.00;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum = sum*i;
        printf("%-4d%-20.0lf\n",i, sum);
    }


    return 0;
}
