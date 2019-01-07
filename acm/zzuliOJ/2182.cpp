#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL euler(LL x) {
    LL n = x;
    for(LL i = 2; i * i <= x; i++) {
        if(x % i == 0) {
            n = n / i * (i - 1);
            while(x % i == 0) {
                x /= i;
            }
        }
    }
    if(x > 1) n = n/ x * (x - 1);
    return n;
}

int main() {
    LL n;
    while(scanf("%lld", &n) != EOF) {
        LL k=0;
        for(LL i = 1; i *i <= n; i++) {
            LL a,b;
            if(n%i==0){
                a = n/i;
                b = n/a;
                k  = k + euler(a)*b;
                if(a!=b)
                k  =  k + euler(b)*a;

            }

        }
printf("%lld\n", k);
    }
    return 0;
}
