#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    int b;
    while(cin>>a>>b){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                int str = a*100+10*i+j;
                if(str % b == 0)
                    printf("%02d ",10*i+j);
            }
        }
        cout<<endl;
    }

	return 0;
}

