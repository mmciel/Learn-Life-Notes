#include <bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main()
{
    int t;
    double n,a,l;
    double s,s1,a1,l1;
    double x1,x2,x3,x4;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf",&n,&a,&l);
        x1=(PI/n)*2;
        x2=(PI-x1)/2;
        x3=2*x2;
        x4=(PI-x3)/2;
        l1=a*sin(x2)/sin(x1);
        s=0.5*sin(x1)*l1*l1*n;
        int cnt=0;
        while(s>l)
        {
            a1=a/2;
            s1=0.5*sin(x3)*a1*a1;
            a=a1*sin(x3)/sin(x4);
            s-=n*s1;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
