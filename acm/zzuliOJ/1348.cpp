#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a = 1;
    int b = 1;
    while(cin>>n){
        if(n ==0){
            cout << "0" <<endl;
            continue;
        }
        if(n == 1||n ==2){
            cout << "1" <<endl;
            continue;
        }
        int c = 0;
        for(int i = 2;i<n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        cout<<b<<endl;
        a = 1;b = 1;
    }
    return 0;
}
