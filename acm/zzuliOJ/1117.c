#include <stdio.h>

#define N 11

int find(int a[], int n, int m);

int del(int a[], int n, int b);

int main()
{
    int n, m, i,b;

    int a[N];

    scanf("%d",&n);


    for(i = 0;i<n; ++i)
    {
        scanf("%d", &a[i]);
    }


    scanf("%d", &m);

    ///三行数输入完毕

    b = find(a,n,m);

    ///调用查找函数
    if( b == -1)

        return 0;
    else
    {
        del(a,n,b);
    ///调用删除函数

    }


    return 0;
}


int find(int a[], int n, int m)
{
    int i;

    for(i = 0;i<n;++i)
    {
        if(a[i] == m)
        {

            return i;
        }
    }
    printf("Not Found");

    return -1;
}
int del(int a[], int n, int b)
{
    int i;

    int j;

    for(i = 0; i<n;++i)
    {
        if(i == b)
        {
            for(j = i;j<n-1;++j)
            {
                a[j] = a[j+1];
            }

            break;
        }
    }
    for(i = 0; i<n-1; ++i)
    {
        printf("%4d",a[i]);
    }

    printf("\n");

    return 0;
}
