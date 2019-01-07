#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d",&n);

    double sum = 0.0, a=1.0;

    for(i=1; 1 ; i++)
    {
        a = a*i;
        sum = sum + a;
        if(sum>=n)
        {
            break;
        }
    }
    printf("m<=%d\n", i-1);


    return 0;
}
