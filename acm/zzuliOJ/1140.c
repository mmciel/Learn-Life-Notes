#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   int t;
   scanf("%d",&t);
   char str[105];
   int n,i;
   int len;

   while(t--)
   {
       scanf("%s%d",str,&n);
       len =strlen(str);
       for(i=0;str[i]!='\0';i++)
       {
           if(str[i]=='.'&&i+n<len)
           {
               printf("%c\n",str[i+n]);
             break;

           }
           else if(str[i]=='.'&&i+n>=len)
           {
               printf("0\n");
             break;
           }

       }
   }
   return 0;
}
