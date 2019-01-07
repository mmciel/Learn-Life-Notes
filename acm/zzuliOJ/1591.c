#include <stdio.h>

int main()
{
    double a[4];
    double x,max;
    int i;
    scanf("%lf",&a[1]);
    max  = a[0];
    x = 1;
    for(i = 2;i<4;++i)
    {
        scanf("%lf",&a[i]);

        if(max<a[i])
        {
            max = a[i];
            x = i;
        }
    }
    printf("%.0lf", x);
    return 0;
}
