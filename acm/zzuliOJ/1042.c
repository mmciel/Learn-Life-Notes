#include <stdio.h>

int main(void)
{
    int i, n, a=1;
    double sum, m;

    scanf("%d", &n);
    sum = 0.0;
    m = 1.0;


    for(i = 1; i <= n; i++)
    {
        sum += i * a / m;
        m += 2;
        a = -a;
    }

    printf("%.3f\n", sum);
    return 0;
}
