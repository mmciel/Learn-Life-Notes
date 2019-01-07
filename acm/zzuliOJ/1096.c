#include <stdio.h>

int sx(int n)
{
    int a,b,c;
    a = n%10;
    b = n/100;
    c = (n%100)/10;
    if(n == a*a*a+b*b*b+c*c*c)
        return 1;
    else
        return 0;
}

int main()
{
    int m,n,i;
    int bj = 0;
    while(scanf("%d%d", &m,&n) != EOF)
    {
        bj = 0;
        for(i = m;i<=n;++i)
        {
            if(sx(i))
            {

            if(bj == 0)
                {printf("%d",i);bj = 1;}
            else
                printf(" %d",i);

            }

        }

        if (bj == 0)
        printf("no");
        printf("\n");
    }



    return 0;
}
