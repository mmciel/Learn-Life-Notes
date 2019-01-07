#include <bits/stdc++.h>

using namespace std;

typedef struct f{
    string number, name;
    int n1,n2,n3;
} firend;

vector<firend> a;
vector<firend> :: iterator it;

bool mycmp1(const firend& x,const firend& y){
    if(x.n1==y.n1)  return x.number>y.number;
    return x.n1<y.n1;
}
bool mycmp2(const firend& x,const firend& y){
    if(x.n2==y.n2)  return x.number>y.number;
    return x.n2<y.n2;
}
bool mycmp3(const firend& x,const firend& y){
    if(x.n3==y.n3)  return x.number>y.number;
    return x.n3<y.n3;
}
void f(int i){
    if(i==1)    sort(a.begin(),a.end(),mycmp1);
    if(i==2)    sort(a.begin(),a.end(),mycmp2);
    if(i==3)    sort(a.begin(),a.end(),mycmp3);
}
void myprint(firend x){
    cout<<x.number<<' '
        <<x.name<<' '
        <<x.n1<<' '
        <<x.n2<<' '
        <<x.n3<<endl;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        firend x;
        cin>>x.number>>x.name>>x.n1>>x.n2>>x.n3;
        a.push_back(x);
    }
    int order;
    scanf("%d", &order);
    f(order);
    for_each(a.rbegin(),a.rend(),myprint);
	return 0;
}

