#include <bits/stdc++.h>

using namespace std;

map<string, int> a;
map<string, int>::iterator it,pi;

int main()
{
    string x;
    int num = 0;
    while(cin>>x,x!="#")    a[x]++;
    for(pi = a.begin();pi!=a.end();++pi){
        if( pi->second > num){
            it = pi;
            num = pi->second;
        }
    }
    cout<<it->first;

	return 0;
}




