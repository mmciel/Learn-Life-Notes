#include <stdio.h>

int main()
{
    int high, up, down;

    scanf("%d%d%d",&high, &up, &down);

    int i, x=0;

    for(i=1; ;++i)
    {
        x = up + x;
        if(x>=high)
            break;
        x = x - down;
    }
    printf("%d", i);
    return 0;
}

