#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4];
    for(int i = 192;i<333;i++)
    {
        int num_flag[10][2]={0,0,1,0,2,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0};
        bool flag = true;
        a[1] = i;   a[2] = 2*i;     a[3] = 3*i;
        for(int i = 1;i < 4; i++){
            int n1 = a[i]%10;
            int n2 = (a[i]/10)%10;
            int n3 = a[i] / 100;
            num_flag[n1][1]++;
            num_flag[n2][1]++;
            num_flag[n3][1]++;
        }
        for(int i = 0;i < 10;i++){
            if(num_flag[i][1] > 1 || num_flag[0][1] > 0){
                flag = false;
                break;
            }
        }
        if(flag) printf("%d %d %d\n", a[1],a[2],a[3]);
    }
    return 0;
}

