#include <stdio.h>

int main()
{
    int n;
    int a[100] = {0};
    while(scanf("%d",&n),n>=0)
    {

        a[n]++;

    }
    int b[100] = {0};
    int i,max = 0;
    for(i = 0;i<100;++i)
    {
        if(a[i]>max)
            max = a[i];
    }
    for(i = 0;i<100;++i)
    {
        if(a[i]==max)
        {
            b[i] = a[i];

        }

    }
    int bj = 0;
    for (i = 0;i<100;++i)
    {
        if(b[i]!=0)
        {
            if(bj == 0)
            {
                printf("%d", i);
                bj = 1;
            }
            else
                printf(" %d", i);
        }
    }




    printf("\n");
    return 0;
}
