#include <bits/stdc++.h>

using namespace std;

typedef struct f{
    string name;
    int year,yue,day;
} firend;

vector<firend> a;
vector<firend> :: iterator it;

bool mycmp(const firend& x, const firend& y){
    if(x.yue < y.yue)  return true;
    if(x.yue == y.yue && x.day < y.day) return true;
    return false;
}
void myprint(const firend& x){
    cout<<x.name<<' ';
    printf("%d-%02d-%02d", x.year,x.yue,x.day);
    cout<<endl;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        firend x;
        cin>>x.name>>x.year>>x.yue>>x.day;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),mycmp);
    for_each(a.begin(),a.end(),myprint);
	return 0;
}





