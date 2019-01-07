#include <stdio.h>



int main ()
{
    int n, i, m, h=1,j;

    scanf("%d", &n);

    m = n;

    for(i=1;1;++i)
    {
        m = m/10;

        if(m == 0)
            break;
        h = 10*h;
    }
    for(j=1;j<=i;++j)
    {
       printf("%d ",n/h);
       n = n%h;
       h = h/10;

    }


    printf("\n");
    return 0;
}

