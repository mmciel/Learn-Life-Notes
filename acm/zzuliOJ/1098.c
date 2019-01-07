#include<stdio.h>
#include<math.h>
double f(double a);
double g(double a);

int main()
{
    double x;
    scanf("%lf", &x);

    x = g(x);
    x = f(x);
    printf("%.2lf", x);

    return 0;
}
double f(double a)
{
    a = fabs(a - 3) + fabs(a + 1);
    return a;
}
double g(double a)
{
    a = a*a - 3*a;
    return a;
}
