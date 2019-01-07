#include <bits/stdc++.h>

using namespace std;

const int N=100001;
int a[N];

int found(int a[], int len, int x);

int main()
{
    int n,m;
    scanf("%d", &n);
    for(int i=0;i<n;++i)    scanf("%d", &a[i]);
    scanf("%d", &m);
    while (m--){
        int x,k;
        scanf("%d", &x);
        k=found(a,n,x);
        if(k == -1)   printf("Not found!\n");
        else        printf("%d\n", k);
    }
    return 0;
}
int found(int a[],int len, int x){
    int left=0, right=len-1, mid;
    while(left<=right){
        mid = (left+right)/2;
        if(x==a[mid])       return mid;
        else if(a[mid]>x)   right= mid-1;
        else                left = mid+1;
    }
    return -1;
}
