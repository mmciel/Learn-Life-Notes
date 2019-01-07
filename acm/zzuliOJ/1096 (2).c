#include <stdio.h>

int sxh(x)
{
    int a,b,c;
    a=x/100;
    b=(x/10)%10;
    c=x%10;

    if(x==((a*a*a)+(b*b*b)+(c*c*c)))
        return 1;
    else
        return 0;
}

int main()
{
    int a, b, i,c=0;
    int bj=0;

    while (scanf("%d%d",&a, &b) != EOF)
    {
        bj = 0;
        for(i=a; i<=b; ++i)
        {

            if (sxh(i)==1)
            {
                if(bj==0)
                    {
                        printf ("%d", i);
                        bj = 1;
                    }
                else
                    printf (" %d", i);
            }
        }

        if (bj == 0)
            printf("no");
        printf("\n");
    }
    return 0;
}



