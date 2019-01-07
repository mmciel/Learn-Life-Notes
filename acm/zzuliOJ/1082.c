#include<stdio.h>

int main()
{
    int t,n,i,j;
    scanf("%d",&t);

    for(i=1;i<=t;++i)
    {
        scanf("%d",&n);

        for(j=1;j<=n;++j)
        {
            if(j%7==0 || j%10==7 || j/10%10==7 || j/100%10==7 || j/1000%10==7)
                printf("%d ",j);

        }
        printf("\n");
    }


    return 0;
}
