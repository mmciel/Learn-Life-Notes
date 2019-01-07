#include <bits/stdc++.h>
using namespace std;
int x1,x2,y11,y2;
void f(int i){
    if(i==1){
        x1=1;x2=0;y11=0;y2=0;
    }
    if(i==2) {
        x1=0;x2=1;y11=0;y2=0;
    }
    if(i==3) {
        x1=0;x2=0;y11=1;y2=0;
    }
    if(i==4) {
        x1=0;x2=0;y11=0;y2=1;
    }
}

int main()
{
    int order,time;
    int time0=0,time1=0;
    scanf("%d",&time1);
    int x=0,y=10*time1;
    f(3);
    while(scanf("%d",&order),order!=3){
        scanf("%d",&time0);
        time = time0-time1;
        time1 = time0;
        if(order==1){
            if(x1) f(3);
            else if(x2) f(4);
            else if(y11) f(2);
            else if(y2) f(1);
            else;
        }
        if(order==2){
            if(x1) f(4);
            else if(x2) f(3);
            else if(y11) f(1);
            else if(y2) f(2);
            else;
        }
        if(x1) x+=time*10;
        else if(x2) x-=time*10;
        else if(y11) y+=time*10;
        else if(y2) y-=time*10;
        else;
    }
    printf("%d %d",x,y);
	return 0;
}

