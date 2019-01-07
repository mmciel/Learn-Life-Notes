#include <stdio.h>

int main()
{
    int i, j = 0, k=0, n, t=0;
    scanf("%d", &n);

    int a[1001];
    int b[1001];


    for(i = 0; i<n; ++i)///数组存入数据
    {
        scanf("%d", &a[i]);
    }
    ///开始排序
    for(i = 0;i<n;++i)
    {
        for(j = i+1; j<n; ++j)
        {
            if(a[i]>a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }

    }
    ///结束排序
    for(i = 0; i<n; ++i)
    {
        if(i == 0)
            b[k] = a[i];

        else
        {
            if(a[i] != a[i-1])
            {
                ++k;
                b[k] = a[i];

            }

        }
    }
    printf("%d\n", k+1);
    for(i = 0; i<=k; ++i)
    {
        if(i == k)
            printf("%d",b[i]);
        else
            printf("%d ",b[i]);

    }

    printf("\n");
    return 0;
}
