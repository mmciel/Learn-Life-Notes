#include <stdio.h>

int main()
{
    int n,m,i;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &m);
        m = m%10;
        for(i = m;i>0;--i)
        {
            printf("I am a good ACMer\n");
        }
        printf("\n");
    }

    return 0;
}
