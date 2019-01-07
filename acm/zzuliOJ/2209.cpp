#include <bits/stdc++.h>

using namespace std;

vector<string> a;
int main()
{
	int n;
	cin>>n;
	while(n--){
        string x,str="";
        cin>>x;
        for(int i=0;i<x.size();i++){
            if(x[i]>='0' && x[i]<='9'){
                for(int j=i;(x[j]<='0'&&x[j]>='9') && x.size();j++){
                    str = str + x[j];
                }
                a.push_back(str);
            }
        }


	}
	return 0;
}

