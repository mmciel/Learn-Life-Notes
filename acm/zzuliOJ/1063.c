#include <stdio.h>

int main()

{

    int u,v,r;
    double x;
    int u1,v1;




    scanf("%d%d",&u,&v);
    u1=u;
    v1=v;

    while(v!=0)

    {

        r=u%v;

        u=v;

        v=r;

    }
    x = (u1/u)*v1;///先除法，避免中间结果溢出
    printf("%d %.0lf",u,x);



    return 0;
}
