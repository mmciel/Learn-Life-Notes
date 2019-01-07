#include <stdio.h>

int zhuans(int h, int m, int s);
void shuchu(int s);


int main()
{
    int i;

    int a, b, c;
    int h1,m1,s1;
    int h2, m2, s2;

   while(scanf("%d:%d:%d %d:%d:%d", &h1,&m1,&s1,&h2,&m2,&s2) != EOF)
    {

        a=(h2*3600+m2*60+s2-(h1*3600+m1*60+s1))/3600;
        b=(h2*3600+m2*60+s2-(h1*3600+m1*60+s1))/60-a*60;
        c=h2*3600+m2*60+s2-(h1*3600+m1*60+s1)-a*3600-b*60;


        shuchu(zhuans(a,b,c));

    }



    return 0;
}


int zhuans(int h, int m, int s)
{
    s = s+60*m+3600*h;
    return s;
}
void shuchu(int s)
{
    printf("%02d:%02d:%02d\n", s/3600,(s/60)%60,s%60);
}
