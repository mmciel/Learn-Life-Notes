#include <stdio.h>

int main()
{
    char ch;
    int a=0,b=0,c=0;



    while(scanf("%c",&ch),ch!='\n')
    {
        if(((ch>='a') && (ch<='z'))  ||  ((ch>='A') && (ch<='Z')))
            ++a;
        else if(ch>='0' && ch<='9')
            ++b;
        else
            ++c;

    }
    printf("letter:%d\n",a);
    printf("digit:%d\n",b);
    printf("other:%d\n",c);
    return 0;
}
