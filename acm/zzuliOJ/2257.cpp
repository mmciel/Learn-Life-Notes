#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b;
    cin>>n;
    vector<int> p;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p.push_back(x);
    }
    for(vector<int>::iterator it=p.begin();it!=p.end();it++){
        int k = *it;

        if( (k%a==0 && k%b!=0) || (k%a!=0 && k%b==0) ){
            cout<<k<<" ";
        }
    }
    cout<<endl;
    return 0;
}
