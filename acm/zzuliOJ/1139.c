#include <stdio.h>
#include <string.h>

int main()
{
    int n,min = 1000;
    int i;
    char m[1000];
    scanf("%d", &n);
    char a[1000];
     getchar();
    while (n--)
    {

        gets(a);
        i= strlen(a);
        if(i<min)
        {
            strcpy(m,a);
            min = i;
        }



    }
    puts(m);


    return 0;

}

