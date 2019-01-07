#include<stdio.h>
#define N 100
///这个程序有毒，因为这里面数学原理决定，不存在横向纵向的错误数分别为12或21
int main()
{
    int i,j,bj = 0,n,sum,b=-1,c=-1;
    int a[N][N];
    scanf("%d",&n);
    for(i=0; i<n; i++)///输入布尔矩阵
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);

    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum= sum + a[i][j];
        }
        if(sum%2!=0)
        {
            bj++;
            b=i;
        }
    }
    for(j=0; j<n; j++)
    {
        sum=0;
        for(i=0; i<n; i++)
        {
            sum+=a[i][j];
        }
        if(sum%2!=0)
        {
            bj++;
            c=j;
        }
    }
    if(bj==0)
        printf("OK");
    else if(bj==2&&c>=0&&b>=0)
        printf("Change bit(%d,%d)",b,c);
    else
        printf("Corrupt");



    printf("\n");
    return 0;
}
