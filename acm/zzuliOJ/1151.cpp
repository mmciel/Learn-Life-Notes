#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        int k = 0;
        string a,b,c(N,'0');    cin >> a>>b;//���岢����
        if(a.size()<b.size())   swap(a,b);//��֤b�ĳ��Ȳ�����a
        int len = a.size() - b.size();//ȷ�����Ȳ�
        if(len){
            string b2(len, '0');
            b= b2 + b;
        }//���볤��
        int h=0;
        for(int i=a.size()-1; i>=0;i--){
            int g = (a[i] - '0') + (b[i] - '0') + h;
            if (g > 9){
                c[k] = g-10+'0';    h = 1;
            }
            else{
                c[k] = g+'0';       h = 0;
            }
            k++;
        }
        if(h==1)       c[k] = 1+'0';
        else           k--;
        for(int i = k;i>=0;i--)     putchar(c[i]);
        putchar('\n');
    }
    return 0;
}
