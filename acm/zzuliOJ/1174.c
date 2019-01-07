#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int greater(char *s1, char *s2){
    int len1,len2;
    len1=strlen(s1);
    len2=strlen(s2);

    int i=0;
    if(len1>len2)               return 1;
    if(len1 < len2)             return -1;
    for(i=0; s1[i]!='\0'; i++){
        if(s1[i] > s2[i])       return 1;
        if(s1[i] < s2[i])       return -1;
    }
    return 0;
}
char *del(char *str)
{
    char *ch=str;
    int i=0;
    for(i=0; str[i]!='\0'; i++){
        if(str[i+1]=='\0')  break;
        if(str[i]!='0')     break;
    }
    ch=&str[i];
    return ch;
}
int main()
{
    char *p[10], str[102], *str1=NULL, *temp=NULL;
    int i,j;

    int n;  scanf("%d",&n);     getchar();
    for(i=0; i<n; i++){
        gets(str);
        str1=del(str);
        p[i]=(char*)malloc(sizeof(char)*(strlen(str1)+1));
        strcpy(p[i],str1);
    }
    for(i=0; i<n-1; i++ )
        for(j=i+1; j<n; j++)
            if(greater(p[i],p[j]) == 1){
                temp=p[i];  p[i]=p[j];p[j]=temp;
            }
    for(i=0; i<n; i++)      puts(p[i]);
    return 0;
}
