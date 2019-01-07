#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    int a,b,c;
    while( cin>>a>>b>>c)
    {
        int k=0;
        for (int sum=10; sum<=100; sum++)
        {
            if (sum%3==a&&sum%5==b&&sum%7==c)
            {
                cout<<sum<<endl;
                k=1;
            }
        }
        if(!k)
            printf("No such team!\n");
    }
    return 0;
}
