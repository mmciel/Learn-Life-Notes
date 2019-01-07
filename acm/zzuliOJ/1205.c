#include <stdio.h>
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

int main()
{
    int x;

    int n,i,m;
    scanf("%d" ,&x);
    int sum;
    while(x--)
    {
        sum = 0;
        scanf("%d", &n);
        int a[n];
        for(i =  0;i<n;++i)
        {
            scanf("%d", &a[i]);

        }

        paixu(a,n);
        for(i = 0;i<n; i++)
        {
            sum = sum+a[i];
        }
        if(sum%2 != 0)
            printf("%d\n",sum);
        else
        {
            for(i=n-1;i>=0;i++)
            {
                if(a[i]%2 != 0)
                {
                    sum = sum - a[i];
                    break;
                }
            }
            printf("%d\n",sum);
        }


    }

    return 0;
}
