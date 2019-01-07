#include <stdio.h>

int main()
{
    int i, n, a, b;
    int m;///存结果
    scanf("%d",&n);
/*由于指数1000，
所以不能完整保留所有数据在最后一步进行取余
所以在不影响后三位的情况下，每次只对余数进行计算
在对余数进行取余。直到得到结果*/
    while(n--)
    {
        scanf("%d%d",&a, &b);
        m = 1;///每次运算初始化为1

        for(i=1;i<=b;++i)
        {
            m = m * a;

            m = m%1000;

        }
        printf("%d\n",m);
    }

    return 0;
}
