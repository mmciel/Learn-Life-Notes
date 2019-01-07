#include <stdio.h>

int main()
{
    int i,j;
    double x,m=0.0;

    scanf("%lf",&x);

    for(i=1;i<=5;++i)
    {
        m = (m+1000)/(1+x*12);




    }
    printf("%.2lf\n",m);
    return 0;
}
