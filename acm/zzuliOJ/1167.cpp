#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int len = a.size()-1;
    int flag,ling_1=0;
    flag = (a[0]=='-') ? -1 : 1;
    for(int i=len;a[i]=='0';i--)    ling_1++;
    int ling_2 = len - ling_1;
    //cout<<ling_1<<'\n'<<ling_2<<'\n'<<len<<'\n';
    if(flag==1&&ling_1==0){
        for(int i = len; i >= 0; --i) putchar(a[i]);
    }
    else if(flag==-1&&ling_1==0){
        putchar('-');
        for(int i = len; i > 0; --i) putchar(a[i]);
    }
    else if(ling_1!=0&&flag==1){
        for(int i = ling_2;i >= 0; --i) putchar(a[i]);
        for(int i = ling_1;i > 0; --i) putchar('0');
    }
    else if(ling_1!=0&&flag==-1){
        putchar('-');
        for(int i = ling_2;i > 0; --i) putchar(a[i]);
        for(int i = ling_1;i > 0; --i) putchar('0');
    }

    return 0;
}

