#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int T;
    cin>>T;
    while(T--){
        int x,k=11111111;
        cin>>x;
        int sum=0;
        for(int i=0;i<x;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2!=0){
                k = min(a[i],k);
            }


        }
        if(sum%2==0){
                if(k!=11111111)
                    sum-=k;
                else
                {
                    cout<<"0"<<endl;
                    continue;
                }
            }
        cout<<sum<<endl;

    }

    return 0;
}
