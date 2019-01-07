#include <bits/stdc++.h>

using namespace std;

typedef struct student{
    string a,b;
    int c,d,e;
}STU;

int main()
{
	int n,flag=0;
	string m;
	STU a[105];
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
        cin>>a[i].a>>a[i].b>>a[i].c>>a[i].d>>a[i].e;
	}
    cin>>m;
    for(int i = 0;i<n;i++){
        if(a[i].a == m){
            flag=1;
        }
	}
    if(flag){
        for(int i = 0;i<n;i++){
            if(a[i].a == m)
                continue;
            cout<<a[i].a<<' '<<a[i].b<<' '<<a[i].c<<' '<<a[i].d<<' '<<a[i].e<<endl;
        }
    }
    else
        printf("error!\n");


	return 0;
}


