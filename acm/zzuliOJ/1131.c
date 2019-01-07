#include <stdio.h>

int main()
{
    char str[101] = {' '};
    gets(str);///
    int i;
    int a[26] = {0};///定义记数数组
    for(i = 0;i<101;++i)///转化成小写
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        if(str[i]!= ' ')
            str[i] = str[i] -'a';///把数组的艾萨克码处理成0-25
    }
    ///循环嵌套解决记数问题（一一配对）下标配对，数组记数
    int j;
    for(i = 0;i<=25;i++)///固定a
    {
        for(j = 0;j<=100;++j)///用str筛选
        {
            if(str[j] == i  && str[j] != ' ')///防止空格符使数组增加
                a[i]++;
        }
    }

    ///寻找数组a的最大值
    int max = 0,xb=0;///最大值与对应下标的存放
    for (i = 0;i<25;++i)
    {
        if(a[i]>max)
        {
            max = a[i];///更新最大值
            xb = i;///记录最大值对应下标
        }

    }

    char ch;
    ch = xb+'a';///多此一举
    getchar(ch);

    return 0;
}
