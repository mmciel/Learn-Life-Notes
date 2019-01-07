#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num=0;
    string k;
    while(n--){
        string x;
        cin>>x;
        if(num<x.size()){
            k = x;
            num = x.size();
        }
    }
    cout<<k<<endl;

    return 0;
}
