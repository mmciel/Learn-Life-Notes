#include <stdio.h>

int main()
{
    int n, i;
    int t1 = 0, t2 = 0;///t1停留时间 t2楼层移动时间

    scanf("%d", &n);///共有n次任务
    int a[1000];
    for(i = 0;i<n;i++)///把数据存入数组
    {
        scanf("%d", &a[i]);

    }

    t1 = n*5;
    for(i = 1; i<n; i++)
    {
        if(i == 1)///第一次运行的时间
        {
            if(a[0] >0)
                t2 = a[0]*6;
            else if(a[0]<0)
                t2 = -1*a[0]*4;//下楼
            else
                i =1;
        }
        if(a[i-1] < a[i])///第二次 以后的运行时间
            t2 = t2 + (a[i]-a[i-1])*6;
        else if(a[i-1] > a[i])
            t2 = t2 + (a[i-1]-a[i])*4;
        else
            continue;
    }
    printf("%d", t1+t2);
    return 0;
}
