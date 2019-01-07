#include <stdio.h>
#define N 30
int main()
{
    int n, i,j;
    scanf("%d", &n);
    int a[N];
    for(i = 0;n!=0;++i)
    {
        a[i] = n%2;
        n = n/2;

    }

    for(j = i-1; j>=0;j--)
    {
        printf("%d",a[j]);
    }

    return 0;
}
