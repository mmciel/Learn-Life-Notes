#include <bits/stdc++.h>

using namespace std;
map<int,int> a;

int main()
{
    int n;

	while(cin>>n && n!=0){
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        map<int,int>::iterator it = a.begin();
        pair<int,int> k = *it;
        for(it++; it!=a.end(); it++){
            if()
        }
	}

	return 0;
}
