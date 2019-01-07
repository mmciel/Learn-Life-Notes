#include <stdio.h>
int a[1000000],b[1000000];
int c[2000000];

int main()
{
    int i = 0, j = 0, m, n;


    scanf("%d", &m);
    for(i = m-1; i>=0; --i)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    for(i = 0; i<n; ++i)
    {
        scanf("%d", &b[i]);
    }



    int k = 0;
    i = 0;
    j = 0;
    while ( i<m && j<n )
    {
        if(a[i] > b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else if(a[i] < b[j])
        {
            c[k] = b[j];
            k++;
            j++;
        }
        else
        {
            c[k]  =  a[i];
            k++;
            i++;
            c[k]  =  b[j];
            j++;
            k++;
        }
    }

    if(i<m)
    {
        for( i = i; i<m; ++i,++k)
        {
            c[k] = a[i];
        }
    }

    if(j<n)
    {
        for( j = j; j<n; ++j,++k)
        {
            c[k] = b[j];
        }
    }



    int bj = 0;

    for(i = 0; i<k; ++i)
    {
        if(bj == 0)
        {
            printf("%d",c[i]);
            bj = 1;
        }
        else
        {
            printf(" %d", c[i]);
        }

    }
    return 0;
}

