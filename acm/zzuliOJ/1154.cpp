#include <bits/stdc++.h>

using namespace std;

int b[10001];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int L,M,sum=0;
        memset(b,-1,sizeof(b));
        scanf("%d%d", &L,&M);
        for(int i=0;i<M;i++){
            int num1,num2;
            scanf("%d%d",&num1,&num2);
            for(int j=num1;j<=num2;j++)
                b[j]=0;
        }
        for(int i=0;i<L+1;i++)
            sum+=b[i];
        printf("%d\n",-sum);
    }

    return 0;
}
