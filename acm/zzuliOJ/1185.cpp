#include <bits/stdc++.h>
using namespace std;

typedef struct student{
    string number;
    string name;
    int za;
    int zb;
    int zc;


}STU;
bool  operator<(const student x,const student y)
    {
        if(x.number<y.number) return true;
        if(x.number==y.number&&x.name<y.name) return true;
        if(x.number==y.number&&x.name==y.name&&x.za<y.za) return true;
        if(x.number==y.number&&x.name==y.name&&x.za==y.za&&x.zb<y.zb) return true;
        if(x.number==y.number&&x.name==y.name&&x.za==y.za&&x.zb==y.zb&&x.zc<y.zc) return true;
        return false;
    }
set <STU> a;
void myprint(STU k);



int main()
{

	int n;
	STU k;
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
        cin>>k.number>>k.name>>k.za>>k.zb>>k.zc;
        a.insert(k);
	}
    cin>>k.number>>k.name>>k.za>>k.zb>>k.zc;
    if(find(a.begin(),a.end(),k.number)!= a.end()){
        cout<<"error!\n";
        return 0;
    }


    for_each(a.begin(),a.end(),myprint);


	return 0;
}
void myprint(const STU k){
    cout<<k.number<<' '
        <<k.name<<' '
        <<k.za<<' '
        <<k.zb<<' '
        <<k.zc<<endl;
}
