#include <bits/stdc++.h>
using namespace std;

/**
    bug��
*/
int main()
{
    freopen("data.txt","w",stdout);
    string x;
    while(getline(cin,x)){
        //����ǿ���
        if(x.size() < 6){
            cout<<x<<endl;
            continue;
        }

        //����********
        if(x.size() == 8 && x[4]!='.'){
            cout<<x[0]<<x[1]<<x[2]<<x[3]<<'.'<<x[4]<<x[5]<<'.'<<x[6]<<x[7]<<endl;
        }
        //����****.**.**
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
        //�ֶ� ��Ϊ��������
        else{
            cout<<x<<endl;
        }
    }
}
