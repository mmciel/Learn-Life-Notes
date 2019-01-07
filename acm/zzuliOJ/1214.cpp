#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vul, d;
    cin>>vul>>d;
    int d1=d;
    d = vul/d;
    if(vul%d1!=0)
        d++;
    int time =0;
    //cout<<d<<endl;
    for(int i=1;d>0;i++){
        if(d-i<0){
            time  = time + d ;
            break;
        }
        else{
            d-=i;
            if(d>0)
                time+=i+1;
            else
                time+=i;
        }
    }

    cout<<time<<endl;
    return 0;
}
