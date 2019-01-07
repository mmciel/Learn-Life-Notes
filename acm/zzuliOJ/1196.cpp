#include <bits/stdc++.h>

using namespace std;
int b[1000000];
pair<double, double> a[400];
double kxy(pair<double,double> p0,pair<double,double> p1,pair<double,double> p2)  {
    return (p1.first-p0.first)*(p2.second-p0.second)-(p2.first-p0.first)*(p1.second-p0.second);
}
int main()
{
    memset(b,0,sizeof(b));
    int n,xa=0;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i].first>>a[i].second;

    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if (kxy(a[i],a[j],a[k])==0)
                    b[xa]++;
            }
            xa++;
        }
    sort(b,b+xa);
    cout<<b[xa-1]<<endl;
    return 0;
}
