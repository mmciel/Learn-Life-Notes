#include <stdio.h>

#define N 35
int bToD(char str[])
{
    int x = 0;
    int i;
    for(i = 0; str[i]!= '\0'; ++i)
        x = x*2 + (str[i] - '0');
    return x;
}
int main()
{
    int i;
    char ch;
    char a1[N], a2[N],a3[N];
    scanf("%s", a1);
    scanf("%s", a2);
    scanf("%s", a3);


    int a,b,c;
    a=bToD(a1);
    b=bToD(a2);
    c = bToD(a3);
    int t;
    if(a>b)
    {
        t = a;
        a = b;
        b = t;
    }
    if(a>c)
    {
        t = a;
        a = c;
        c = t;
    }
    if(b>c)
    {
        t = b;
        b = c;
        c = t;
    }

    printf("%d %d %d\n", a,b,c);

    return 0;
}

