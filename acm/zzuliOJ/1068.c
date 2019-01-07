#include<stdio.h>

int main(void)
{
    char ch;
    int i = 0;

    while(ch = getchar(), ch != '\n')
        i = i * 2 + (ch - '0');

    printf("%d\n", i);
    return 0;
}
