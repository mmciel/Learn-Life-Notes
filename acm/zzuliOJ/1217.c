#include <stdio.h>
#include <math.h>


int main()
{
    int n;
    int i,a,b;
    int m= 0;
    while (scanf("%d", &n), n!=0)
    {
        if(n == 1) m++;
        a = sqrt(n);
        b = sqrt(a);
        for(i = b;i<=a;++i)
        {
            if((n/i)%i==0 && n%i==0 && i==((n/i)/i))
             {
                 m++;
break;
             }


        }
    }
    printf("%d", m);

    return 0;
}
