#include <stdio.h>
#define N 100005
int main()
{
    int n;
    scanf("%d", &n);
    double a[n+2];

    int i;
    double sum = 0;
    for(i = 0;i<n;++i)
    {
        scanf("%lf", &a[i]);
        if(a[i]>=60)
        sum++;
    }
    sum = sum/n;
    printf("%.2lf\n", sum);
    return 0;
}

