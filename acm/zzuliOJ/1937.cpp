#include <bits/stdc++.h>
using namespace std;
bool f(int n){
    stringstream stream;
    stream<<n;
    string x;
    stream>>x;
stream.clear();
    for(int i=0;i<x.size();i++){
       // cout<<"2"<<endl;
        if(x[i]=='7'){

            return true;
        }
    }
    return false;

}
int main()
{
    int n;
    cin>>n;


    if(n%7==0 || f(n)){
        cout<<"pass"<<endl;
        return 0;
    }
    cout<<n<<endl;

    return 0;
}

