#include <bits/stdc++.h>
using namespace std;

typedef struct xyxy{
    int c;
    int d;
}xy;
vector<xy> a;
bool mycmp(xy aq,xy bq){
    if(aq.c==bq.c)
        return aq.d<bq.d;
    return aq.c<bq.c;
}
void myprint(xy k){
    cout<<'('<<k.c<<','<<k.d<<')'<<' ';
}
int main()
{

	int n;
	scanf("%d", &n);
    a.resize(n);
	for(int i = 0;i<n;i++)
        scanf("%d%d", &a[i].c,&a[i].d);

    sort(a.begin(),a.end(),mycmp);
    for_each(a.begin(),a.end(),myprint);
    cout<<endl;
    for_each(a.rbegin(),a.rend(),myprint);
	return 0;
}

