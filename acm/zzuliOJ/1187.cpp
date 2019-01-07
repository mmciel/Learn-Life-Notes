#include <bits/stdc++.h>

using namespace std;

map<string, int> a;

int main()
{
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
        string x;
        cin>>x;
        a[x]++;
	}
	cout<<"zhang "<<a["zhang"]<<'\n'
        <<"wang "<<a["wang"]<<'\n'
        <<"zhao "<<a["zhao"]<<'\n'
        <<"liu "<<a["liu"]<<'\n'
        <<"miao "<<a["miao"]<<endl;

	return 0;
}



