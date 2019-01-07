#include <stdio.h>

int runnian(int a);


int main()
{
    int a, b, c;
    int rn,x=0;
    int t[13]={0,31,0,31,30,31,30,31,31,30,31,30,31};
    scanf("%d-%d-%d", &a, &b, &c);
    ///用a判断是否为闰年
    rn = runnian(a);
    if(rn)
        t[2] = 29;
    else
        t[2] = 28;

    for(rn = 1;rn<b;rn++)
    {
        x = x+t[rn];
    }
    x = x + c;
    printf("%d\n",x);



    return 0;

}
int runnian(int a)
{
    if(a%4==0&&a%100!=0 || a%400 == 0)
        return 1;
    return 0;
}


