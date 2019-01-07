#include <bits/stdc++.h>
using namespace std;
int m[20000] = {0};
int main()
{
    int a,b,c;
    int n,t=0;
    cin>>n>>a>>b>>c;
    while(t!=n){
        m[a*t] = 1;
        m[b*t] = 1;
        m[c*t] = 1;
        t++;
    }
    int num = 0;
    for(int i = 0;i<20000;i++)
        num+=m[i];
    cout<<num<<endl;
    return 0;
}
