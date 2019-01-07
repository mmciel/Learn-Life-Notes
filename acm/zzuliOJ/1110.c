#include <stdio.h>
int q(int x, int y);

int main()
{
    int x,y,n;
    scanf("%d%d", &x, &y);

    printf("%d",q(x,y));


    return 0;
}
int q(int x, int y)
{
    if(x==y)
        return x;
    else if(x>y)
        q(x/2,y);
    else
        q(x,y/2);
}
