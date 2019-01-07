#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    scanf("%d", &n);

    static int* a = (int*)malloc(sizeof(int)*n);

    for(int i=0;i<n;++i)    scanf("%d",&a[i]);
    scanf("%d", &x);
    for(int i=n-x;i<n;++i)    printf("%d ", a[i]);
    for(int i=0;i<n-x;++i)    printf("%d ", a[i]);

    return 0;
}
