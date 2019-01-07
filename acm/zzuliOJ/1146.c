#include <stdio.h>
#define N 100005
int main()
{
    int t,i;
    int n;
    int max = 0,sum = 0;
    int a[N];
    scanf("%d", &t);
    while(t--)
    {
        max = 0;
        sum = 0;
        scanf("%d", &n);
        for(i = 0; i<n; ++i)
        {
            scanf("%d", &a[i]);
            if(max<a[i])
                max = a[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]<max)
                sum+=a[i];
        }

        if(max-1>sum)
            printf("No\n");
        else
            printf("Yes\n");

    }

    return 0;
}
