#include <stdio.h>

int main()
{
    char str[101] = {' '};
    gets(str);///
    int i;
    int a[26] = {0};///�����������
    for(i = 0;i<101;++i)///ת����Сд
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        if(str[i]!= ' ')
            str[i] = str[i] -'a';///������İ������봦���0-25
    }
    ///ѭ��Ƕ�׽���������⣨һһ��ԣ��±���ԣ��������
    int j;
    for(i = 0;i<=25;i++)///�̶�a
    {
        for(j = 0;j<=100;++j)///��strɸѡ
        {
            if(str[j] == i  && str[j] != ' ')///��ֹ�ո��ʹ��������
                a[i]++;
        }
    }

    ///Ѱ������a�����ֵ
    int max = 0,xb=0;///���ֵ���Ӧ�±�Ĵ��
    for (i = 0;i<25;++i)
    {
        if(a[i]>max)
        {
            max = a[i];///�������ֵ
            xb = i;///��¼���ֵ��Ӧ�±�
        }

    }

    char ch;
    ch = xb+'a';///���һ��
    getchar(ch);

    return 0;
}
