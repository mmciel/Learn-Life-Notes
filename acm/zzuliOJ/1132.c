#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    int count = 0,i,n;
    scanf("%d",&n);
    getchar();
    for(i = 1;i<=n;++i)
    {
        while( ch = getchar(), ch != '\n')
        {
            if(ch>='0'&&ch<='9')
                count++;
        }

        printf("%d\n", count);
        count = 0;
    }


    return 0;
}
