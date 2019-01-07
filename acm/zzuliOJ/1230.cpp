#include <bits/stdc++.h>
using namespace std;
 int a[100000];
int main()
{
    int flag,n;
    //vector<int> a;

    while(cin>>flag>>n){
            int k=1;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            if(a[i]>=flag){
                cout<<i<<endl;
                k=0;
                break;
            }
        }
        if(k){
            cout<<"NONE"<<endl;
        }
    }


    return 0;
}
