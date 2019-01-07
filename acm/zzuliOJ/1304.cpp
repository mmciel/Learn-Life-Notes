
#include <bits/stdc++.h>
using namespace std;
#define MAX_N 10000
int a[10000];
int n;
int LISdp(void)
{
    int dp[MAX_N]={0};
    for(int i = 0;i<n;i++){
        dp[i]=1;
        for(int j = 0;j<i;j++){
            if(a[i]<=a[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    int maxlen=0;
    for(int i = 0;i<n;i++){
        if(dp[i]>maxlen) maxlen = dp[i];
    }
    return maxlen;
}

int main()
{
    int i = 0;
    while(scanf("%d", &a[i])!=EOF){i++;

    }
    n = i;
    //cout<<n<<endl;
    int len = LISdp();

    cout<<len<<endl;


    return 0;
}
