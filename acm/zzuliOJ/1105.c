#include <stdio.h>

int s(int n)
{
    int i, sum = 0;
    for(i = 1; i<n; ++i)
    {
        if(n%i==0)
            sum = sum+i;

    }
    return sum;
}

int main()
{
    int m, n;
    int i;
    int k;
    int bj = 0;

    scanf("%d%d", &m, &n);

    for(i = m; i<n; ++i)
    {
        if(s(i)<=n &&s(i)>i)
        {
            k = s(i);
            if(s(k)==i)
            {
                printf("%d %d\n", i, k);
                bj = 1;
            }


        }
    }
    if(bj == 0)
        printf("No answer");





    return 0;
}
