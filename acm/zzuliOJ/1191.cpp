#include <bits/stdc++.h>

using namespace std;
vector< pair <int, int> > a;
vector< pair <int, int> >::iterator it ;
int main()
{
	int n;
	scanf("%d", &n);
	pair<int ,int> x;
	for(int i = 0;i<n;i++){
        cin>>x.first>>x.second;
        a.push_back(x);
	}
    sort(a.begin(),a.end());
    it = unique (a.begin(), a.end() );
    a.erase (it, a.end() );
	cout << a.size();
	return 0;
}
