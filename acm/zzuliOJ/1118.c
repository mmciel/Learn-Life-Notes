#include <stdio.h>

int insert(int a[], int n, int sum);
void printarr(int a[],int n);

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i;
    int sum;
    for(i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&sum);
    insert(a,n,sum);

    return 0;

}

void printarr(int a[],int n)
{
    int i;
    for(i = 0; i<n;++i)
    {
        if(i == 0)
            printf("%d", a[0]);
        else
            printf(" %d", a[i]);
    }
    printf("\n");
}
int insert(int a[], int n, int sum)
{
    int i,j;
    for(i = 0;i<n;++i)
    {
        if (i == n-1 && a[i] <=sum)
            {
                a[n] =sum;
                break;
            }
        if(sum <=a[i])
        {

            for(j = n;j>=i+1;j--)
            {
                a[j] = a[j-1];
            }
            a[i] = sum;
        }
        if(sum <=a[i])
            break;

    }
    printarr(a,n+1);

}
