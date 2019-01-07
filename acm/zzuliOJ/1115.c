#include <stdio.h>
#include <limits.h>


int main()
{
    int n,i,j=0;
    int min;
    scanf("%d", &n);
    int a[n];
    min  = INT_MAX;
    for(i = 0;i<n;i++)
    {
        scanf("%d", &a[i]);

        if(a[i]<min)
        {
            min = a[i];
            j = i;

        }

    }
    printf("%d %d\n",min, j);

    return 0;
}

