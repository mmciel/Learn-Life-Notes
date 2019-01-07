#include <stdio.h>

int main()
{
    char a;
    int i = 0;



    while(scanf("%c",&a),a!='\n')
    {


        if(a>='0' && a<='9')
            ++i;

    }
    printf("%d\n",i);

    return 0;
}
