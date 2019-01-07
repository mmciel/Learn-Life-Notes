#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)//数据注入
        a.push_back(i);
    int t = 1;//初始化
    while(a.size() != 1){//保留最后一个小猴子
        t += m-1;
        t = (t%n) ? (t%n) : n;//防止下标溢出
        a.erase(a.begin()+t-1);
        n--;
    }
    cout<<*(a.begin())<<endl;
    return 0;
}
