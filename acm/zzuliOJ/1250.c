#include <stdio.h>

void paixu(int a[],int n);
int main()
{
    int n,i,j;
    int max=0,di=0;
    int shuliang;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &shuliang);

        int a[shuliang+5];
        for(i = 0;i<shuliang;++i)
            scanf("%d", &a[i]);
        paixu(a,shuliang);
        int bj = 0;
        int b[shuliang+2]  = {0};
        int j = 0;
             for(i = 0;i<shuliang-1 ;++i)
            {
                b[j] = a[i];
                if(a[i]==a[i+1])
                {
                    b[j] *= 2;
                    bj++;
                }
                else
                    j++;
            }
        paixu(b,bj);


        printf("%d %d\n", max, shuliang-di);

        max = 1;
        di = 0;

    }

    return 0;
}
void paixu(int a[],int n)
{
    int i,j,t;
    for(i = 0;i<n-1;i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
