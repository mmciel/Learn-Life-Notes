#include <stdio.h>

int main() {
    int n,i,sum;
    while (scanf("%d",&n) != EOF) {
        sum = 1;
        for (i = 1; i <= n; i++) {
            sum *= i;
            while (sum % 10 == 0) {
                sum /= 10;
            }
            sum  = sum % 100000;
        }
        sum = sum % 10;
        printf("%5d -> %d\n", n, sum);
    }
    return 0;
}
