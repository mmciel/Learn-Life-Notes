#include <bits/stdc++.h>
using namespace std;

vector<string> a;
int main()
{
    a.push_back("zero");
     a.push_back("one");
      a.push_back("two");
       a.push_back("three");
        a.push_back("four");
        a.push_back("five");
         a.push_back("six");
          a.push_back("seven");
           a.push_back("eight");
            a.push_back("nine");
             //a.push_back("ten");
    int n;
    cin>>n;
    while(n--){
        int k,b;
        cin>>k>>b;
        int c = k+b;
        int x = c/10;
        int y = c%10;
        if(x!=0)
            cout<<a[x]<<" "<<a[y]<<endl;
        else
            cout<<a[y]<<endl;
    }

    return 0;
}

