#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,i,m;

    scanf("%d%d",&n,&m);

    for(i=n;i<=m;++i)
    {
        printf("%4d%8.4lf\n",i,log(i));


    }



    return 0;
}
