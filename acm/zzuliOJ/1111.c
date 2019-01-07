#include <stdio.h>
void in(int n)
{
    if(n == 0)
    return;


    int i=0;

    scanf("%d",&i);
    n--;
    in(n);
    printf("%d ",i);

}

int main()
{
    int n;
    scanf("%d",&n);
    in(n);
    printf("\n");
    return 0;
}
