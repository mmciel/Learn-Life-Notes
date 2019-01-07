#include <stdio.h>


int main(void)
{
    int i,n;
    int sum = 1;


    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        sum = (sum + 1)*2;

    }
    printf("%d\n",sum);


    return 0;
}

