#include <bits/stdc++.h>
using namespace std;

/**
    bug版
*/
int main()
{
    freopen("data.txt","w",stdout);
    string x;
    while(getline(cin,x)){
        //如果是空行
        if(x.size() < 6){
            cout<<x<<endl;
            continue;
        }

        //处理********
        if(x.size() == 8 && x[4]!='.'){
            cout<<x[0]<<x[1]<<x[2]<<x[3]<<'.'<<x[4]<<x[5]<<'.'<<x[6]<<x[7]<<endl;
        }
        //处理****.**.**
        else if(x.size() == 10){
            cout<<x<<endl;
        }
        //****.*.**
        else if(x.size() == 9 && x[6] == '.'){
            cout<<x[0]<<x[1]<<x[2]<<x[3]<<x[4]<<'0'<<x[5]<<x[6]<<x[7]<<x[8]<<endl;
        }
        //****.**.*
        else if(x.size() == 9 && x[7] == '.'){
            cout<<x[0]<<x[1]<<x[2]<<x[3]<<x[4]<<x[5]<<x[6]<<x[7]<<"0"<<x[8]<<endl;
        }
        //****.*.*
        else if(x.size() == 8 && x[4] == '.' && x[6] == '.'){
            cout<<x[0]<<x[1]<<x[2]<<x[3]<<x[4]<<"0"<<x[5]<<x[6]<<"0"<<x[7]<<endl;
        }
        //手动 因为不会正则
        else{
            cout<<x<<endl;
        }
    }
}
