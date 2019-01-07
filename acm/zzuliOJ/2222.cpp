#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k=30;
    srand((unsigned int)(time(NULL)));
    while(k--){
        unsigned int n = rand()%1000+1;
        cout<<n<<',';
    }
    clock_t time1 = clock();
    clock_t time2 = clock();
    cout <<"Running Time == "<<(double)(time1 - time2) / CLOCKS_PER_SEC << endl;

    return 0;
}


















/**
	#include <bits/stdc++.h>
using namespace std;
string num;
int main()
{
    int x;
    scanf("%d",&x);
    int n,m;
    while(cin>>n>>m){
        for(int i = n;i<=m;i++){

        }
    }

    return 0;
}

#include <bits/stdc++.h>
int main()
{
    int a[3],x=scanf("%d%d%d",&a[0],&a[1],&a[2])?std::sort(a,a+3),printf("%d<%d<%d",a[0],a[1],a[2]):1;
}

*/
