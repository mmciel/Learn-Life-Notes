#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){

        if(n==1){
            cout<<"6"<<endl;
        }
        else if(n==2){
            cout<<"3"<<endl;
        }
        else if(n==3){
            cout<<"9"<<endl;
        }
        else{
            int sum=2205;
            n-=3;
            while(n--){
                sum+=9995;
                sum%=10000;
            }
            int a,b,c,d;
            a = sum%10;
            sum/=10;
            b = sum%10;sum/=10;
            c = sum%10;sum/=10;
            d = sum%10;sum/=10;
            sum = a+b+c+d;
            cout<<sum<<endl;
        }

    }

    return 0;
}






/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){

        if(n==1){
            cout<<"6"<<endl;
        }
        else if(n==2){
            cout<<"3"<<endl;
        }
        else if(n==3){
            cout<<"9"<<endl;
        }
        else if(n==4){
            cout<<"4"<<endl;
        }
        else{
            int sum=0;
            int a =(n*5);
            int b =(1+(n-1)*9);
            int c =(1+(n-2)*9);
            int d =(1+(n-3)*9);
            sum = (a+10*b+100*c+1000*d)%10000;
            a = sum%10;
            sum/=10;
            b = sum%10;sum/=10;
            c = sum%10;sum/=10;
            d = sum%10;sum/=10;
            sum = a+b+c+d;
            if(sum==23||sum == 19)
                cout<<"6"<<endl;
            else
            cout<<sum<<endl;
        }

    }

    return 0;
}


*/
