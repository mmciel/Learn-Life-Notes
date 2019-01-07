#include <stdio.h>

int main(void)
{
    int n,i,a,sum=1;

    scanf("%d",&n);

    for(i=1;i<=n;++i)
    {
        scanf("%d",&a);

        if(a%2!=0)
        {
            sum = sum*a;
        }

    }
    printf("%d",sum);


    return 0;
}
