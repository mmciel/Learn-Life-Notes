#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m){
        n %= 10;
        int a[5];
        int sum=1;
        for(int i=1;i<=4;i++){
            sum *= n;
            sum %= 10;
            a[i]=sum;
        }
    a[0]=a[4];
    sum = a[m%4];
    cout<<sum<<endl;
	}

	return 0;
}
