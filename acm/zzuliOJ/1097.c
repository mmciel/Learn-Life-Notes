#include<stdio.h>

int aaa(char n)
{
    int a;
    if(n=='A')
        a=95;

    else if(n=='B')
        a=85;

    else if(n=='C')
        a=75;

    else if(n=='D')
        a=65;

    else if(n=='E')
        a=40;
    else
        a=0;
    return a;
}
int main()
{
    char m;
    int i=0;
    double sum=0,j;
    while((m=getchar()) != '\n')
    {

        j = aaa(m);
        sum += j;
        i++;
    }
        printf("%.1lf", sum*1.0/i);
    return 0;
}
