#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 202
//将密文cipher解密后将明文存入plain
void decrypt(char *cipher, char *plain);
int main()
{
    char *cipher,*plain=0;
    int i;
    cipher=(char *)malloc(sizeof(char)*N);
    plain=(char *)malloc(sizeof(char)*N);
    gets(cipher);
    decrypt(cipher,plain);
    for(i=0; i<strlen(plain); i++)
        printf("%c",plain[i]);
    return 0;
}
void decrypt(char *cipher, char *plain)
{
    int i=0,j=0;

    for(i=0; i<strlen(cipher); i=i+2)
    {

        plain[j++]=(cipher[i]-'0')*10+(cipher[i+1]-'0')+24;

    }
    plain[j]='\0';

}
