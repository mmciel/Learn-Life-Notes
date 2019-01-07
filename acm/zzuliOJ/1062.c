#include <stdio.h>

int main()

{

    int u,v,r;



    scanf("%d%d",&u,&v);

    while(v!=0)

    {

    r=u%v;

    u=v;

    v=r;

    }

    printf("%d\n",u);

    return 0;
}
