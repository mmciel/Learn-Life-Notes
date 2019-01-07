#include <stdio.h>
#include <string.h>

struct student{
    char number[15];
    char name[30];
    int a;
    int b;
    int c;
};
typedef struct student s;

int main()
{
    s a[105];
    int n,i;
    scanf("%d", &n);
    getchar();
    for(i = 0;i<n;++i)
    {
        scanf("%s%s", a[i].number, a[i].name);
        scanf("%d", &a[i].a);
        scanf("%d", &a[i].b);
        scanf("%d", &a[i].c);

    }
    char str[15];
    int bj = 0;
    scanf("%s", str);
    for(i = 0;i<n;i++)
    {
        if(strcmp(str,a[i].number) == 0)
        {
            printf("%s %s %d %d %d", a[i].number,a[i].name, a[i].a, a[i].b, a[i].c);
            bj = 1;

        }

    }
        if(bj == 0)
        {
            printf("Not Found");
        }

    return 0;
}

