#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>m>>n;
    while(n--){
        int T,sum=0,x;
        cin>>T;
        for(int i = 0;i<T;i++){
            cin>>x;
            sum+=x;
        }
        if(sum == m)
            cout<<"ok"<<endl;
        else
            cout<<"pass"<<endl;
    }
    return 0;
}

