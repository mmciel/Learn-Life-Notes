#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while (cin>>a>>b){

         if (a.size() < b.size()) printf("no\n");
         else{
            a=a+a;//保证循环移动的最大化
            if(a.find(b) == -1)     printf("no\n");
            else                    printf("yes\n");
         }
    }
    return 0;
}
