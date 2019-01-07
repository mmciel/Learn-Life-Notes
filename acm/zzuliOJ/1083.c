int main()
{
    double x;
    int n,i;

    int a=0;
    int b=0;
    int c=0;
    while(scanf("%d", &n),n!=0)
    {

        a=0,b=0,c=0;
        for(i=0;i<n;i++)
        {
            scanf("%lf", &x);
            if(x<0)
                a++;
            else if(x==0)
                b++;
            else
                c++;
        }
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
