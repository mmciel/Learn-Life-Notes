#include <stdio.h>
#include <math.h>


int main ()
{
    double x, sum=0.0, b, a=1.0, c = 0.0;
    int i, j, fh = 1;

    scanf("%lf",&x);

    for(i=1;i<=10;i++)
    {

        for(j=1;j<=(2*i-1);++j)
        {
            a = a*j;
        }

        c = pow(x, (2*i-1));

        b = c/a;

        sum = sum + (fh*b);

        fh = - fh;

        a = 1.0;
    }

    printf("%.3lf",sum);

    return 0;
}
