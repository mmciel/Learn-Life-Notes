#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)//����ע��
        a.push_back(i);
    int t = 1;//��ʼ��
    while(a.size() != 1){//�������һ��С����
        t += m-1;
        t = (t%n) ? (t%n) : n;//��ֹ�±����
        a.erase(a.begin()+t-1);
        n--;
    }
    cout<<*(a.begin())<<endl;
    return 0;
}
