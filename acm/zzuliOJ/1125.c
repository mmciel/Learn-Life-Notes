#include <stdio.h>



int main()
{
    int n ,j,i;
    scanf("%d", &n);
    if(n == 1)
    {
        printf("YES");
        return 0;
    }
    int a[n][n];

    int bj = 0;

    for(i = 0;i<n;++i)
    {
        for(j = 0;j<n;++j)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=n-1;i>0;i--)
    {
        for(j = 0;j<i;++j)
        {
            if(a[i][j]!=0)
            {
                bj = 1;
                break;
            }
        }
    }



    if(bj == 1)
        printf("NO");
    else
        printf("YES");

    return 0;
}

