#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,a[21],sum=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum>30){

			cout<<"poor dongdong! You are dead"<<endl;
			continue;
		}
		else{
			LL k=1;
			for(LL i=2;i<=n;i++)
                k*=i;
            cout<<k<<endl;
		}


	}

	return 0;
}
