#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t, i;
    while(cin>>t, t)
    {
        int flag = 0;
         map<string,int> a;
         map<string,string> b;
         set<string > c;
         for(int i=0;i<t;i++){
            string x;
            cin>>x;
            string r=x;
            sort(x.begin(),x.end());
            a[x]++;
            b[x]=r;
         }
         for(map<string,int>::iterator it = a.begin();it!=a.end();it++){
            if((*it).second==1){
                string str = (*it).first;
                string str2 = b[str];
                c.insert(str2);
                flag = 1;
            }
         }
         for(set<string>::iterator it = c.begin();it!=c.end();it++){
            cout<<*it<<" ";
         }
         if(flag==0){
            cout<<"None";
         }
        cout<<endl;
    }
    return 0;
}
