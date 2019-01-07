#include <stdio.h>


int main()
{
    int n, k;
    scanf("%d", &n);
    int a[n];
    for(k = 0; k<n;++k)
    {
        scanf("%d",&a[k]);
    }
    int i, j, t;
    for(i = 0; i<n-1; ++i)
    {

        for(j = 1 + i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for(i =0; i<n; ++i)
    {
        if(i == n-1)
            printf("%d", a[i]);
        else
            printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
