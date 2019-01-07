#include <bits/stdc++.h>
using namespace std;
void myprint(int x)
{
    cout<<x<<"\n";
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    while(m--){
        int x,y;
        cin>>x>>y;
        if(x!=y)
        swap(a[x-1],a[y-1]);
    }
    for_each(a.begin(),a.end(),myprint);

    return 0;
}
