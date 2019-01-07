#include <stdio.h>
#include <string.h>

#define N 200
int main()
{
    char a[N];
    gets(a);

    int i,max;
    max = a[0];
    for(i = 1;a[i] != '\0';++i)
    {
        if(max<a[i])
            max = a[i];
    }

    for(i = 0;a[i] != '\0';++i)
    {
        printf("%c", a[i]);
        if(a[i] == max)
            printf("(max)");

    }
    printf("\n");



    return 0;
}
