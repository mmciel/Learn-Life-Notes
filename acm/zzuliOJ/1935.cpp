#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[2000];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    cout<<a[0];
    for(int i=1;i<n;i++)
        cout<<" "<<a[i];
    cout<<endl;
    return 0;
}
