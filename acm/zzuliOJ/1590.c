#include <stdio.h>

int main()
{
    double x ;
    scanf("%lf", &x);
    if(x<60)
    printf("学末");
    else if(x>=60 && x<70)
    printf("学渣");
    else if(x>=70 && x<80)
        printf("学弱");
    else if(x>=80 && x<90)
        printf("学霸");
    else
        printf("学神");


    return 0;
}
