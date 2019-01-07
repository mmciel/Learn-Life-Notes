#include <stdio.h>

int main()
{
    int i,n,a,b,c;
    scanf("%d", &n);
    a=1;
    b=1;
    c=1;

    for(i=3; i<=n; ++i)
    {
        c = a;
        a = a+b;
        b = c;
    }
    printf("%d",a);


    return 0;
}
