#include<stdio.h>
int fib(int k);
int cs(int k);
int i = 0;///��������еļ�����������⣬��ȫ�ֱ���

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
    printf("�ݹ������%d��",i);
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
