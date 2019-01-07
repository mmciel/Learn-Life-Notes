#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL a,b,mod;
int t;

LL pow(void){
    LL ans=0;
    while(b)
    {
        if(b%2) (ans+=a)%=mod;
        (a*=2)%=mod;
        b/=2;
    }
    return ans;
}

int main()
{

    cin>>t;
    while(t--){
        cin>>a>>b>>mod;




        cout<<pow()<<endl;
    }

    return 0;
}
