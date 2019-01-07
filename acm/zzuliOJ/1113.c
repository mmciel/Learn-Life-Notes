#include<stdio.h>
int fib(int k);
int cs(int k);
int i = 0;///多个函数中的记数并输出问题，用全局变量

int main(void )
{
    int n;
    scanf("%d", &n);
    cs(n);

    return 0;
}
int cs(int k)
{
    printf("%d\n",fib(k));
    printf("递归调用了%d次",i);
    return 0;
}
int fib(int k)
{
    i++;
    if(k == 1 || k == 2)
        return 1;
    else
        return fib(k-1) + fib(k-2);

}
