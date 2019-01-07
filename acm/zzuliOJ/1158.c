#include <stdio.h>

void swap( int *pa, int *pb)
{
    int t;
    t=*pa; *pa=*pb; *pb=t;
}

int main()
{

    int a[5];

    int i, j;
    scanf("%d%d%d%d", &a[1], &a[2], &a[3],&a[4]);
    for(i = 1;i<=3;i++)
    {
        for(j = i+1; j<=4;++j)
        {
            if(a[i]<a[j])
            swap (&a[i],&a[j]);
        }
    }
    i = 2;
    printf("%d", a[1]);
    while(i <= 4)
    {
        printf(" %d", a[i]);
        i++;
    }
    printf("\n");
        return 0;

}
