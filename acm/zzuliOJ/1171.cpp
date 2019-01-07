#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> a;
    string x;
    int k=0,len=0;
    while(getline(cin,x), x!="****"){
        a.push_back(x);
    }
    for(int i = 0;i!=a.size();i++){
        if(a[i].size()> len){
            k=i;
            len = a[i].size();
        }
    }
    cout<<a[k]<<endl;
	return 0;
}

