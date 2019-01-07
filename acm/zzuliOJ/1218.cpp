#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    while(n--){
        int a,b;
        scanf("%d%d", &a,&b);

        int n=0,m=0;
        int flag=0;
        while(a!=0){
            if(a%10!=0) flag=1;
            if(flag)    n = n*10 + a%10;
            a/=10;
        }
        flag=0;
        while(b!=0){
            if(b%10!=0) flag=1;
            if(flag)    m = m*10 + b%10;
            b/=10;
        }
        printf("%d\n", m+n);
        //cout << m << ' ' << n <<endl;
    }
	return 0;
}


