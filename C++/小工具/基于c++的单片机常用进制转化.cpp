#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int  t[MAXN], A[MAXN];
char OldData[MAXN], NewData[MAXN];  // ת��ǰ���������
int olds, news;                     // ת��ǰ����Ľ���
//std::bitset��ת2���ƣ���std::oct��ת8���ƣ���std::dec ��ת10���ƣ���std::hex��ת16���ƣ�
//���÷�ʽ������olds��news��OldData��Ȼ�����trans(),���NewData
void trans()
{
    int i, len, k;
    len = strlen(OldData);
    for(i=len; i>=0; --i)
        t[len-1-i] = OldData[i] - (OldData[i]<58 ? 48 : OldData[i]<97 ? 55 : 61);
    for(k=0; len;){
        for(i=len; i>=1; --i){
            t[i-1] += t[i]%news*olds;
            t[i] /= news;
        }
        A[k++] = t[0] % news;
        t[0] /= news;
        while(len>0 && !t[len-1]) --len;
    }
    NewData[k] = NULL;
    for(i=0; i<k; ++i)
        NewData[k-1-i] = A[i] + (A[i]<10 ? 48 : A[i]<36 ? 55 : 61);
}

int main()
{

	char ch;
	cout<<"1:2-16\n2:10-16"<<endl;
	cin>>ch;
	switch(ch){
		case '1':
			while(1){
				olds=2;news=16;
			    gets(OldData);
			    trans();
			    cout<<OldData<<":";
			    puts(NewData);
			}
		case '2':
			while(1){
				olds=10;news=16;
			    gets(OldData);
			    trans();
			    cout<<OldData<<":";
			    puts(NewData);
			}
	}
    return 0;
}

