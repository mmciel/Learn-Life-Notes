#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<int,int>k;
    map<int,int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
            if(k.second<a[x]){
                k.second=a[x];
                k.first=x;
            }
        }
    cout<<k.first<<endl;

    return 0;
}

