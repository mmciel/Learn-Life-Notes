#include <stdio.h>
#define N 100005
int main()
{
    double n;
    scanf("%lf", &n);
    if(n>100)
        n = 0.95 * n;
    printf("%.2lf", n);
    return 0;
}


