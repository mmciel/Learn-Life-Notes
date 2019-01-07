#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 1005
int main()
{
    int m,n;
    int a[N],b[N];

    scanf("%d%d", &n,&m);
    int i,j,min;
    for(i = 0;i<n;++i)
        scanf("%d",&a[i]);
    for(j = 0;j<m;++j)
        scanf("%d",&b[j]);
    min = fabs(a[0] - b[0]);
    i = 0;
    j = 0;
    while(i<m)
        while(j<n)
    {
        if(fabs(a[i]-b[j+1])<min&&j+1<m)
            {
                min = fabs(a[i]-b[j+1]);
                j++;
            }
            else if(fabs(a[i+1]-b[j])<min&&i+1<n)
            {
                min = fabs(a[i+1]-b[j]);
                i++;
            }
            else
            {
                i++;
                j++;
                if(fabs(a[i]-b[j])<min)
                    min=fabs(a[i]-b[j]);
            }
            if(i==m-1||j==n-1)
                break;
    }

    printf("%d", min);
    return 0;
}

