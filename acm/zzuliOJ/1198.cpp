//Î´Íê
#include <bits/stdc++.h>
using namespace std;

typedef struct f{
    string name;
    vector<string> pro;
    int sum;
    int time;
}acm;
acm a[101];

void f1(string & s,int & sum,int & time)
{
    int len = s.size()-1;
    if(s == "0"){
        sum=0;
        time=0;
    }
    else if(s[len] != ')'){
        int num=0;
        if(s[0]=='-'){
            sum=0;
            time=0;
            return;
        }
        for(int i = 0;i<s.size();i++){
            num = num*10 + (int)(s[i]-'0');
        }
        sum++;
        time = num;

    }
    else if(s[len] == ')'){
        int num=0;int i;
        for( i = 0;s[i]!='(';i++){
            num = num*10 + (int)(s[i]-'0');
        }
        time = sum;
        num = 0;
        for(i++;i<s.size();i++){
            num = num*10 + (int)(s[i]-'0');
        }
        time+=num;
    }


}
void solve(acm k)
{
    k.sum=0,k.time=0;
    int sums=0,times=0;
    for(int i = 0;i<8;i++){
        sums=0,times=0;
        string s = k.pro[i];
        f1(s,sums,times);
        k.sum+=sums;
        k.time+=times;
    }

}
int main()
{

    int n;
    for(int i = 0;i<n;i++){
        string x;
        cin>>x;
        a[i].name = x;
        for(int j=0;j<8;j++){
            cin>>x;
            a[i].pro.push_back(x);
        }
        solve(a[i]);
    }
    return 0;
}
