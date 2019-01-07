#include <stdio.h>



int main()
{
    int n, i=0;
    scanf("%d", &n);
    char str[1000];
    if(n == 0)
    {
        printf("0\n");
        return 0;
    }
    while(n!=0)
    {
        str[i] = n%2;
        ++i;
        n = n/2;

    }
    int bj = 0;
    for(i = i-1; i>=0; --i)


        printf("%d", str[i]);

    printf("\n");
    return 0;
}
