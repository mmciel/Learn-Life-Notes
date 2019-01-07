#include <stdio.h>


int i(int n);

int main(viod)
{
    int n;
    scanf("%d", &n);
    printf("%d\n",i(n)+n);


}

int i(int n)///ÄæĞò³ÌĞò
{
    int s=0;///nÊÇ´ıÄæĞòµÄÊı×Ö
    while(n>0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    return s;

}
