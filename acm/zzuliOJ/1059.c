#include <stdio.h>
#include <limits.h>

int main()
{
    int fenshu, max;


    max =INT_MIN;



    while(scanf("%d",&fenshu),fenshu>=0)
    {

        if(max<fenshu)
            max = fenshu;
    }
    printf("%d\n", max);


    return 0;
}

