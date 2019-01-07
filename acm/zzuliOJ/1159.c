#include <stdio.h>

#define N 1005
void swap( int *pa, int *pb)
{
    int t;
    t=*pa;
    *pa=*pb;
    *pb=t;
}

void LargestTow(int a[],int n,int *pfirst,int *psecond) ;

int main()
{
    int n;
    int a[N];
    scanf("%d", &n);

    int i,j,k;
    for(i = 0; i<n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int pfirst,psecond;
    LargestTow(a,n,&pfirst,&psecond);




    return 0;
}

void LargestTow(int a[],int n,int *pfirst,int *psecond)
{
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
                swap(&a[i],&a[j]);
        }
    }
    pfirst=&a[0];
    psecond=&a[1];
    printf("%d %d\n",*pfirst,*psecond);

}
