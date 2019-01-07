#include <stdio.h>
#include <string.h>
#define N 40
void  dToK(char str[], int k, int n);
int main()
{
    int n;
    scanf("%d", &n);
    char str[N];
    dToK(str, 2, n);
    dToK(str, 3, n);
    dToK(str, 7, n);
    dToK(str, 8, n);

    return 0;
}
void  dToK(char str[], int k, int n)
{

    int i = 0;
    while(n>0)
    {
        str[i] = n%k + '0';
        i++;
        n = n/k;
    }

    for(k = i-1;k>=0;--k)
    {
        printf("%c",str[k]);
    }
    printf("\n");
}

