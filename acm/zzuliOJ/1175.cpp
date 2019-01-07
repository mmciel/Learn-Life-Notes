#include <bits/stdc++.h>
using namespace std;

int n, m;
vector < vector<int> > a;
vector <int> v1;
int main()
{
    std::ios::sync_with_stdio(false);
    cin>>n>>m;
    int i,j,x;
    for(i=0;i<n;i++)    a.push_back(v1);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            cin>>x;
            a[i].push_back(x);
        }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<a[j][i]<<" ";
        cout<<endl;
    }
    return 0;
}
