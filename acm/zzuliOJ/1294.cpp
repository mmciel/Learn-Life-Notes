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
    int flag=0;//���
    int gcd=2;
    int k=3;//�������±꣬��Ϊ����������������һ�����ֵ������k=3��ʼ
    for(i=7;i<=10000;i+=gcd)
    {
        flag=0;
        gcd=6-gcd;//6N+1��6N+5�ı任
        for(j=0;prime[j]*prime[j]<=i;j++)//��Ϊһ�������űȳ˷���Ҫ���ģ������ó˷��ٶȸ��졣
        {
            if(i%prime[j]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)//�������û�б������������� ˵��Ϊ����
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
