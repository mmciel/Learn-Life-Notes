#include <bits/stdc++.h>
using namespace std;

int main()
{

    while(1){
        int k1=0,k2=0;
        string a, a0=" ",a9=" ";
        set<string> str;
        string::iterator it,ileft,iright;
        getline(cin,a);
        if(a=="#")  break;
        a = a0+a+a9;
        for(it = a.begin()+1; it!=a.end()-1; it++){
            if(*(it)!=' ' && *(it-1)==' '){
                ileft = it;     k1=1;
            }
            if(*(it)!=' ' && *(it+1)==' '){
                iright = it;    k2=1;
            }
            if(k1&&k2){
                k1=0;k2=0;
                string x;
                for(string::iterator iter = ileft;iter!=iright+1;iter++)
                    x = x+ *iter;
                transform(x.begin(),x.end(),x.begin(),::tolower);
                str.insert(x);
            }
        }
        printf("%d\n",str.size());
    }
	return 0;
}



