#include <stdio.h>

void FindMax(int p[2][3], int m, int n, int *pRow, int *pCol)
{
    int i=0,j=0;
    int max = p[i][j];
    *pRow = i;
    *pCol = j;
    for(i = 0;i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            if(p[i][j] > max)
            {

                max = p[i][j];
                *pRow = i;
            *pCol = j;

            }
        }
    }

    printf("%d ",max);

}

int main()
{
    int a[2][3];
    int i,j;
    for(i = 0;i<2;++i)
    {
        for(j = 0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int p,q;
    FindMax(a, 2, 3, &p,&q);

    printf("%d %d\n",p,q);


    return 0;
}

