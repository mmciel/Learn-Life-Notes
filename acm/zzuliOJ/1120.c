#include <stdio.h>

int mi(int a[], int n);///最小值函数

int ma(int a[], int n);///最大值函数

int main()
{
    int n,i;

    scanf("%d", &n);

    if(n == 1)///只有一个数字的情况
    {
        printf("%d",n);
        return 0;
    }

    int a[n];

    for (i = 0; i<n; i++)///数组接收数据
    {
        scanf("%d",&a[i]);

    }
    int x,y;///用来存储函数返回结果

    int t;

    y = mi(a,n);///先完成最小值交换

    t = a[y];

    a[y] = a[0];

    a[0] = t;

    x = ma(a,n);///之后完成最大值交换

    t = a[x];

    a[x] = a[n-1];

    a[n-1] = t;

    for(i = 0;i<n; ++i)///标准格式输出
    {
        if(i == n-1)
            printf("%d",a[i]);
        else
            printf("%d ",a[i]);
    }



    return 0;
}

int mi(int a[], int n)
{
    int i,k;

    int m;

    m = a[0];

    k = 0;

    for(i = 1;i<n; ++i)
    {
        if(a[i]<m)
        {
            m = a[i];

            k = i;
        }

    }
    return k;
}

int ma(int a[], int n)
{
    int i,k;

    int m;

    m = a[0];

    k = 0;

    for(i = 1;i<n; ++i)
    {
        if(a[i]>m)
        {
            m = a[i];

            k = i;
        }

    }
    return k;
}
