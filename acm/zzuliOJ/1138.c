#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[50] = {' '};
    gets(str);
    int i;
    int len = strlen (str);

    if(isalpha(str[0])||str[0] == '_')
    i = 0;
    else

    {
        printf("no\n");
        return 0;
    }
    int bj=1;
    for(i = 1;i<len;i++)
    {
        if (!isalnum(str[i]) && str[i] != '_')
            {
                printf("no\n");
                bj =0;
                break;
            }
    }
    if(bj == 1)
        printf("yes\n");
    return 0;
}
