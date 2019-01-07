#include <bits/stdc++.h>

using namespace std;

typedef struct f{
    string name;
    int num1,num2;
    char ch1,ch2;
    int num3;
    int sum;
} firend;

vector<firend> a;
vector<firend> :: iterator it;

int jiangxuejin(firend& x){
    int sum = 0;
    if(x.num1>80 && x.num3>0)   sum+=8000;
    if(x.num2>80 && x.num1>85)  sum+=4000;
    if(x.num1>90 )              sum+=2000;
    if(x.num1>85 && x.ch2=='Y') sum+=1000;
    if(x.num2>80 && x.ch1=='Y') sum+=850;
    return sum;
}
int main()
{
    int n,msum=0,msum2=0,imax;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        firend x;
        cin>>x.name>>x.num1>>x.num2>>x.ch1>>x.ch2>>x.num3;
        x.sum=jiangxuejin(x);
        a.push_back(x);
    }
    for(int i=0;i<a.size();i++){
        msum2 += a[i].sum;
        if(a[i].sum > msum){
            msum = a[i].sum;
            imax = i;
        }
    }
    cout<<a[imax].name<<'\n'
        <<msum<<'\n'
        <<msum2<<endl;
	return 0;
}
