#include <bits/stdc++.h>

using namespace std;

typedef struct f{
    string number, name;
    int n1,n2,n3;
    int nsum;
} firend;

vector<firend> a;


bool mycmp1(const firend& x,const firend& y){

    if(x.nsum==y.nsum && x.name==y.name) return x.number  <  y.number;
    if(x.nsum==y.nsum)  return x.name<y.name;

    return x.nsum>y.nsum;
}
void myprint(firend x){
    cout<<x.number<<' '
        <<x.name<<' '
        <<x.n1<<' '
        <<x.n2<<' '
        <<x.n3<<' '
        <<x.nsum<<endl;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        firend x;
        cin>>x.number>>x.name>>x.n1>>x.n2>>x.n3;
        x.nsum  = x.n1+x.n2+x.n3;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),mycmp1);
    for_each(a.begin(),a.end(),myprint);
	return 0;
}


