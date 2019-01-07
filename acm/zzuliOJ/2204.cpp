#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
     while(cin >> n){
        int num=0;
        string::iterator it=n.begin();
        for(it;it!=n.end();it++){
            if((*it) == '0'){
                num++;
            }
        }
        cout<<num<<endl;
    }

	return 0;
}
