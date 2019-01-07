#include <stdio.h>


int main()
{
    int n;
    int a=1, b=0, c=0;
    scanf("%d", &n);
    int biaoji=1;

    for(a=1; a<=9; a++)
    {
        for(b=1; b<=9; b++)
        {
            for(c=0; c<=9; c++)
            {
                 if((a*100+b*10+c)+(b*100+10*c+c) == n)
                {
                    printf("%4d%4d%4d\n",a, b, c);
                    biaoji = 0;

                }
            }
        }
    }
    if(biaoji == 1)
        printf("No Answer");





    return 0;
}
