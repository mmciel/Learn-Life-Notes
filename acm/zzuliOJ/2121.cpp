#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100]={0};
    a[1]=1;a[2]=2;a[3]=4;
    for(int i=4;i<22;i++){
        a[i] =(a[i-1]+a[i-2]+a[i-3])%10007;
        //cout<<a[i]<<" ";
    }
    int t;
    cin>>t;
    while(t--){
        int sum = 1;
        int n=0;
        cin>>n;
        int x;
        for(int i = 0;i<n-1;i++){
            scanf("%d", &x);
            sum*=a[x];
            sum%=10007;
        }
        cout<<sum<<endl;
    }

    return 0;
}
