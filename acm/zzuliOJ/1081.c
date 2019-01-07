#include<stdio.h>

int main()
{
    int t,i,a,sum,j,n;
    sum=0;

    scanf("%d", &t);

    for(i=1;i<=t;++i)
    {
        scanf("%d",&n);
        for(j=1;j<=n;++j)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
