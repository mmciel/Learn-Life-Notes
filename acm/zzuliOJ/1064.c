#include <stdio.h>

int main()

{
    char ch;

    while(ch=getchar(),ch!='@')
    {
        if(ch>='A' && ch<='Z')
        {
            ch = ch + 32;
            if(ch>='a' && ch<='y')
            {
                ch = ch +1;
                printf("%c",ch);
                continue;
            }
            if(ch == 'z')
            {
                ch = 'a';
                printf("%c",ch);
                continue;
            }
        }
        if(ch>='a' && ch<='y')
        {
            ch = ch +1;
            printf("%c",ch);
            continue;
        }
        if(ch == 'z')
        {
            ch = 'a';
            printf("%c",ch);
            continue;
        }
        printf("%c",ch);
    }

    return 0;
}

