#include <bits/stdc++.h>

using namespace std;

int main()
{
	string x;
	vector<string> a;
	while(cin>>x,x!="*****"){
        a.push_back(x);
	}
    sort(a.begin(),a.end());
    vector<string>::iterator it;
    it = a.end()-1;
    cout<<*it<<endl;
	return 0;
}

