
#include <bits/stdc++.h>
using namespace std;
int is(int n)
{
        if(n<=1) return 0;
        int m=floor(sqrt(n)+0.5);
        for(int i=2;i<=m;i++)
          if(n%i==0) return 0;
        return 1;
}
int main()
{
    int n,m;
    while(cin>>n>>m){
            vector<int> a;
    vector<int> ::iterator it;
    int sum=0;
        if(n<m) swap(n,m);
        for(int i=m;i<=n;i++){
            if(is(i)){
                sum++;
                a.push_back(i);
            }
        }
        cout<<sum<<endl;
        if(a.size()){
            for(it=a.begin();a.end()!=it;it++){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"nothing!"<<endl;
        }
    }
    return 0;
}
