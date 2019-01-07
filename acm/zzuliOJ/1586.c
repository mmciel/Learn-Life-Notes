#include <stdio.h>

int main()
{
    int n,bj = 0;

    int sum=0;
    int i;
    while (scanf("%d", &n)!=EOF)
    {
        if(bj == 0)
        {
            sum = sum +n;
            bj = 1;
        }
        while(n!=0)
        {
            sum  = sum +n%10;
            n = n/10;
        }
        printf("%d\n", sum);
        sum = 0;
        bj = 0;
    }

    return 0;
}

