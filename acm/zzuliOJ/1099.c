#include <stdio.h>



int main()
{

    int n, m, i;
    while((scanf("%d",&n))!=EOF)
    {
        i = 0;
        while(n != 1)
        {
            if(n%2==0)
            {
                n=n/2;
                ++i;
            }
            else
            {
                n=n*3+1;
                ++i;
        }

        }
        printf("%d\n",i);
    }


    return 0;
}




