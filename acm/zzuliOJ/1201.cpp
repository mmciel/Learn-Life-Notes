#include <bits/stdc++.h>

using namespace std;

map<int,int> a;
bool cmp(const pair<int,int> a,const pair<int, int> b){
    return a.second < b.second;
}
int main()
{
	int n,x;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
        scanf("%d", &x);
        a[x]++;
	}
	//max_element���� �������ֵ��������cmp��������.second�Ƚ�
	map<int,int >::iterator it1 = max_element(a.begin(),a.end(),cmp);

	cout<< it1->first << '\n' << it1->second <<endl;

	return 0;
}
