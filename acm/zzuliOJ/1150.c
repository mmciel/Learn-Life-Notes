#include <stdio.h>
#define N 1005
int main()
{
    char str[N];
    gets(str);

    int i;
    int bj=0, x = 0;
    for(i = 0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            if(bj == 0)
              {
                    x++;
                    bj = 1;
              }

        }
        else
            bj = 0;
    }
    printf("%d", x);

    return 0;
}
