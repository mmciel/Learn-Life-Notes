#include <bits/stdc++.h>
using namespace std;

typedef struct f{
    int a;
    int b;
}Int;

 bool cmp(Int a,Int b){
    return a.b>b.b;
 }
int main()
{
    Int a[200];
    int n;
    while(cin>>n,n!=0){
        for(int i = 0;i<n;i++){
            cin>>a[i].a;
            (a[i].a<0) ?  (a[i].b = -a[i].a) : (a[i].b = a[i].a);
        }
        sort(a,a+n,cmp);
        for(int i = 0;i<n;i++)
            cout<<a[i].a<<" ";
        cout<<endl;
    }

    return 0;
}
