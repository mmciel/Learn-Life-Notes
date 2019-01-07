#include <stdio.h>



int main ()
{
    int n, i, m;

    scanf("%d", &n);

    m = n;

    for(i=1;1;++i)
    {
        m = m/10;
        if(m == 0)
            break;
    }
    for(m=1;m<=i;m++)
    {
        printf("%d ",n%10);
        n = n/10;

    }

    printf("\n");
    return 0;
}

