#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    int sum = 0;
while(n--)
    {
        scanf("%d", &i);

        if(i%2==0)
            sum+=i;
    }
    printf("%d", sum);

    return 0;
}
