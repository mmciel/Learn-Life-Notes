#include <bits/stdc++.h>

using namespace std;
vector< vector<int> > a;
vector<int>b;
int main()
{
    int m,n,x,sum=0;
    scanf("%d%d", &m,&n);
    if(m==1&&n==1){
        scanf("%d", &x);
        printf("%d\n", x);
        return 0;
    }
    if(m==1){
        for(int i=0;i<n;i++){
            scanf("%d", &x);
            sum+=x;
        }
        printf("%d", sum);
        return 0;
    }
    if(n==1){
        for(int i=0;i<m;i++){
            scanf("%d", &x);
            sum+=x;
        }
        printf("%d", sum);
        return 0;
    }
    for(int i=0;i<m;i++)    a.push_back(b);
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf("%d", &x);
        a[i].push_back(x);
    }
    for(int i=0;i<n;i++)    sum+=a[0][i];
    for(int i=0;i<n;i++)    sum+=a[m-1][i];
    for(int i=1;i<m-1;i++)    sum+=a[i][0];
    for(int i=1;i<m-1;i++)    sum+=a[i][n-1];
    printf("%d\n",sum);
	return 0;
}
