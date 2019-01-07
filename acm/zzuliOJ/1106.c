#include <stdio.h>
#include <math.h>

int huiwen(n)
{


    int s=0;///nÊÇ´ýÄæÐòµÄÊý×Ö
    while(n>0)
    {
        s=s*10+n%10;
        n=n/10;
    }

     return s;
}


int main()
{
    int m, n,i;

    scanf("%d", &n);

    while(m = huiwen(n), m!=n)
    {


        if( m!= n)
        {
            printf("%d ",n);
             n = n + m;

        }


    }
    printf("%d\n",n);



    return 0;
}

