#include <stdio.h>
#include <math.h>

int main()
{
    int i,n,m;
    int biaoji=0;
    scanf("%d",&m);

    n = (int)sqrt(m);


    for(i=2;i<=n;++i)
    {
        if(m%i==0)
        {
            biaoji=1;
            break;
        }

    }

    if(biaoji==1 || m==1)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}

