#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>a;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a[x]++;
    }
    int sum=0;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        if(a[x]!=0){
            sum++;
            a[x]--;
        }
    }
    cout<<sum<<endl;
    return 0;
}
