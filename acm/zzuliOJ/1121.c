#include <stdio.h>

int main()
{
    int n, i;
    int t1 = 0, t2 = 0;///t1ͣ��ʱ�� t2¥���ƶ�ʱ��

    scanf("%d", &n);///����n������
    int a[1000];
    for(i = 0;i<n;i++)///�����ݴ�������
    {
        scanf("%d", &a[i]);

    }

    t1 = n*5;
    for(i = 1; i<n; i++)
    {
        if(i == 1)///��һ�����е�ʱ��
        {
            if(a[0] >0)
                t2 = a[0]*6;
            else if(a[0]<0)
                t2 = -1*a[0]*4;//��¥
            else
                i =1;
        }
        if(a[i-1] < a[i])///�ڶ��� �Ժ������ʱ��
            t2 = t2 + (a[i]-a[i-1])*6;
        else if(a[i-1] > a[i])
            t2 = t2 + (a[i-1]-a[i])*4;
        else
            continue;
    }
    printf("%d", t1+t2);
    return 0;
}
