#include <stdio.h>

int main()
{
    char str[101];
    gets(str);
    int k, i = 0;
    scanf("%d",&k);

    while(str[i] != '\0')
    {


        if(k == 0)
            continue;
        if(str[i] >= 'a' && str[i]<='z' )
            str[i] = (str[i] - 'a' + k)%26+'a';
        if(str[i]>='A' && str[i]<='Z')
            str[i] = (str[i] - 'A' + k)%26+'A';

        ++i;
    }

    puts(str);

    return 0;
}
