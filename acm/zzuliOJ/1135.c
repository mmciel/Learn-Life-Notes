#include <stdio.h>

int main()
{

    double n = 0, k,i;
    char a[100];

    while( scanf("%*s%lf%lf", &k,&i) != EOF )
    {
        n = n+k*i;
    }
    printf("%.1lf\n",n);
    return 0;
}
