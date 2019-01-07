
#include <stdio.h>


int main(void)
{
    int m,n,x=0,y=0;
    int i;

    scanf("%d%d",&n, &m);


    for(i=n;i<=m;i++)
    {
        if(i%2==0)
        {
            x = x+(i*i);
        }
        else
        {
            y = y+(i*i*i);
        }

    }
    printf("%d %d\n",x, y);


    return 0;
}
