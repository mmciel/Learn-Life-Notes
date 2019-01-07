#include <stdio.h>
#include <string.h>

#define N 1005

int main()
{
    int n,t,i;
    int a[N];
    char str[N];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d",&n);
        for(i = 0;i<n;++i)
        {
            scanf("%d",&a[i]);
        }
        for(i = 0;i<n;++i)
        {
            str[i] = a[i];
        }
        str[i] = '\0';
        puts(str);
    }

    return 0;
}
