#include <stdio.h>


int main(void)
{
    int n,i,a,shuzi=0,sum=0;


    scanf("%d%d",&n, &a);

    for(i=1;i<=n;i++)
    {
        shuzi = shuzi*10+a;
        sum +=shuzi;

    }
    printf("%d\n",sum);


    return 0;
}


