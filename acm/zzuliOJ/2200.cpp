#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 1;
    for(int i = 1;i<=n;++i){
        if(i%5!=0){
            sum = ((i%1000000)*sum)%1000000;
        }

    }
    printf("%06d",sum);
    return 0;
}
