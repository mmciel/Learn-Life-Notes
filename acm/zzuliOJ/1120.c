#include <stdio.h>

int mi(int a[], int n);///��Сֵ����

int ma(int a[], int n);///���ֵ����

int main()
{
    int n,i;

    scanf("%d", &n);

    if(n == 1)///ֻ��һ�����ֵ����
    {
        printf("%d",n);
        return 0;
    }

    int a[n];

    for (i = 0; i<n; i++)///�����������
    {
        scanf("%d",&a[i]);

    }
    int x,y;///�����洢�������ؽ��

    int t;

    y = mi(a,n);///�������Сֵ����

    t = a[y];

    a[y] = a[0];

    a[0] = t;

    x = ma(a,n);///֮��������ֵ����

    t = a[x];

    a[x] = a[n-1];

    a[n-1] = t;

    for(i = 0;i<n; ++i)///��׼��ʽ���
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
