#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p1=-1,p2=-1,f=0;
    string a;
    cin>>a;
    for(int i = a.size()-1;i>=0;--i){
        if(a[i]!='0'&&i>p2)     p2 = i;
        if(a[i]=='.')           p1 = i;
        if(p1!=-1&&p2!=-1){
            if(p1==p2)          f = 1;
            break;
        }
    }
    if(f)    printf("No decimal part\n");
    else{
        putchar('0');
        for(int i= p1;i<=p2;++i)  putchar(a[i]);
    }
    return 0;
}
