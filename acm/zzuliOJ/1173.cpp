#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
	string a,mm;
	cin>>a;
	for(string::iterator it=a.begin();it!=a.end();it = it+2)
        mm = mm + (char)((*it-'0')*10+(*(it+1)-'0')+24);
	cout<<mm<<endl;
	return 0;
}

