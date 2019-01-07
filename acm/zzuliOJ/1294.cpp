#include <bits/stdc++.h>
using namespace std;
int prime[10005]={2,3,5};
bool er(int a[],int n,int num)
{
    int left = 0, right = n;
    int mid;
    while(left < right){
        mid = (left+right) / 2;
        if( num == a[mid] ) return true;
        else if( num > a[mid] ) left = mid+1;
        else if( num < a[mid] ) right = mid;
    }
    return false;
}
void is_prime()
{
    int i,j;
    int flag=0;//标记
    int gcd=2;
    int k=3;//素数的下标，因为已有三个，所以下一个出现的宿舍从k=3开始
    for(i=7;i<=10000;i+=gcd)
    {
        flag=0;
        gcd=6-gcd;//6N+1和6N+5的变换
        for(j=0;prime[j]*prime[j]<=i;j++)//因为一个开根号比乘法是要慢的，所以用乘法速度更快。
        {
            if(i%prime[j]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)//若这个数没有被其他素数整除 说明为素数
        {
            prime[k++]=i;
        }

    }
}
int main()
{
    is_prime();
    int n;
    while(cin>>n){

    int k=n/2;
    int sum=0;
    for(int i=2;i<=n;i++){

       if(er(prime,n,i)){  sum++;
        if(er(prime,n,n-i)){
          sum++;
        }
       }
       //cout<<prime[i]<<" ";
    }
    cout<<sum<<endl;
    }
    return 0;
}
