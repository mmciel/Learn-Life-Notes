#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if( (n%4==0 && !(n%100) ) || n%400) return 2;
    return 1;
}

int main()
{
    map<int,int> m1;
    map<int,int> m2;
    m1[1] = 31; m1[2] = 28; m1[3] = 31; m1[4] = 30; m1[5] = 31; m1[6] = 30;
    m1[7] = 31; m1[8] = 31;m1[9] = 30; m1[10] = 31; m1[11] = 30; m1[12] = 31;
    m2[1] = 31; m2[2] = 29; m2[3] = 31; m2[4] = 30; m2[5] = 31; m2[6] = 30;
    m2[7] = 31; m2[8] = 31;m2[9] = 30; m2[10] = 31; m2[11] = 30; m2[12] = 31;
    int year=0,mon=0,day=0;
    while(scanf("%d-%d-%d", &year,&mon,&day), !(year==0 && mon==0 && day==0))
    {
        int sum = 0;
        if( f(year)== 1 ){
            sum += m1[mon]-day;
            for(int i = mon+1;i<13;i++)
                sum+=m1[i];
            int year0 = year+1;
            while(year0<year+18){
                if(f(year0)==1) sum+=365;
                else            sum+=366;

                year0++;
            }
            if(f(year0)==1){
                for(int i = 1;i<mon;++i)
                    sum += m1[i];
            }
            else{
                 for(int i = 1;i<mon;++i)
                    sum += m2[i];
            }
            sum += day;

        }
        if( f(year)== 2 ){
            sum += m2[mon]-day;
            for(int i = mon+1;i<13;i++)
                sum+=m2[i];
            int year0 = year+1;
            while(year0<year+18){
                if(f(year0)==1) sum+=365;
                else            sum+=366;

                year0++;
            }
            if(f(year0)==1){
                for(int i = 1;i<mon;++i)
                    sum += m1[i];
            }
            else{
                 for(int i = 1;i<mon;++i)
                    sum += m2[i];
            }
            sum += day;
        }
        cout<<sum<<endl;
    }
    return 0;
}


