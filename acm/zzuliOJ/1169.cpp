#include <bits/stdc++.h>
using namespace std;

vector<string> a;
bool mycmp(const string& x,const string& y){
    if( x.size()==y.size() )    return x < y;
    return x.size() < y.size();
}
void myprint(const string& x){
    cout<<x<<endl;
}
int main()
{
    string x;
    for(int i =0;i<3;++i){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),mycmp);
    for_each(a.begin(),a.end(),myprint);
    return 0;
}

