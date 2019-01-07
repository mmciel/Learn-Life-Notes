#include <bits/stdc++.h>

using namespace std;

const int N = 10001;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n,amax=0;  scanf("%d", &n);
        int a[N];
        for(int i=0;i<n;++i)    scanf("%d", &a[i]);
        sort(a,a+n);
        for(int t=1,i=1;i<n;++i){
            if(a[i-1] == a[i])  t++;
            else                t=1;
            if(amax<t)          amax=t;
        }
        printf("%d\n", amax);
    }
    return 0;
}
