#include <bits/stdc++.h>

using namespace std;

int main()
{
    for(int i = 3; i<66; i++){
        for(int j = i+1; j<=100; j++){
            for(int k = j+1;k<=100;k++){
                if(k*k == i*i + j*j)
                    printf("(%d,%d,%d)\n", i,j,k);
            }
        }
	}
	return 0;
}

