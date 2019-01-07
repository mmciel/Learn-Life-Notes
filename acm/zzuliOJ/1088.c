#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%*6d%5d",&a);
        printf("6%05d\n",a);

    }
}
