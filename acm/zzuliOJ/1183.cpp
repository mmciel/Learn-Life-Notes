#include <bits/stdc++.h>
using namespace std;

typedef struct xyxy{
    int c;
    int d;
    int num;
}xy;
vector<xy> a;
bool mycmp(xy aq,xy bq){
    return aq.num<bq.num;
}
void myprint(xy k){
    cout<<'('<<k.c<<','<<k.d<<')'<<' ';
}
int main()
{

	int n;
	scanf("%d", &n);
    a.resize(n);
	for(int i = 0;i<n;i++){
        scanf("%d%d", &a[i].c,&a[i].d);
        a[i].num = a[i].c*a[i].c+a[i].d*a[i].d;
	}
    sort(a.begin(),a.end(),mycmp);
    for_each(a.begin(),a.end(),myprint);
	return 0;
}
