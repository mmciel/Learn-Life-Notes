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
    int n;
    scanf("%d", &n);
    printf("%d",s(n));


    return 0;
}

