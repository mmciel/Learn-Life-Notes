
#include<stdio.h>
int PrintLine(int n)
{
    int i, j, a, b;
    for(i = 1; i<=n; i++)///�ӵ�һ�е���n��
    {
        for(j = 1;j<=n-i;j++)///n-i��ʾÿ�п�ʼ�Ŀո���
            printf(" ");

        for(a = 1;a<=i;a++)///i��ÿ�����ֵ
            printf("%d",a);

        for(b = i-1;b>0;b--)///�ݼ���1
            printf("%d",b);
        printf("\n");
    }
    for(i = 1;i<n;i++)///�ӵ�n�е����
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
