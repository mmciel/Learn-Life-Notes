#include <bits/stdc++.h>

using namespace std;
set <int> a,b;
set <int>::iterator it ;
int main()
{
	int n1,n2,num;
	while(scanf("%d%d", &n1,&n2), n1!=0 && n2!=0){
        for(int i=0;i<n1;i++){
            scanf("%d", &num);
            a.insert(num);
        }
        for(int i=0;i<n2;i++){
            scanf("%d", &num);
            b.insert(num);
        }
        int flag=0;
        for(it=a.begin();it!=a.end();it++){
            if(find(b.begin(),b.end(),*it) == b.end()){
                 cout<<*it<<' ';
                 flag=1;
            }
        }
        if(flag)
            cout<<endl;
        else
            cout<<"NULL\n";

	}
	return 0;
}

