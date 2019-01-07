#include<stdio.h>

int main(void)
{
    int number;
    int i, jishu = 0;

    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
         if(( i%10 != 4 )&& (i/10) % 10 != 4 && (i/100 ) % 10!=4 )
            jishu++;
    }

    printf("%d\n", jishu);
    return 0;
}
