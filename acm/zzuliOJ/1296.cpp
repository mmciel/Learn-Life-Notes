#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int r=b;
        b=a%b;
        a=r;
    }
    return a;
}
int main()
{
    int n;cin>>n;
    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        a*=d;
        c*=b;
        int sum=b*d;
        int zi = a+c;
        int k=gcd(sum,zi);
        cout<<zi/k<<' '<<sum/k<<endl;
    }
    return 0;
}
