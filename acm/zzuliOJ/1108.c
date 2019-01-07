
#include<stdio.h>
int PrintLine(int n)
{
    int i, j, a, b;
    for(i = 1; i<=n; i++)///从第一行到第n行
    {
        for(j = 1;j<=n-i;j++)///n-i表示每行开始的空格数
            printf(" ");

        for(a = 1;a<=i;a++)///i是每行最大值
            printf("%d",a);

        for(b = i-1;b>0;b--)///递减到1
            printf("%d",b);
        printf("\n");
    }
    for(i = 1;i<n;i++)///从第n行到最后
    {
        for(j = 1;j<=i;j++)
            printf(" ");

        for( a = 1;a<=n-i;a++)
            printf("%d",a);

        for(b = n-(i+1);b>0;b--)
            printf("%d",b);
        printf("\n");
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    PrintLine(n);

}
