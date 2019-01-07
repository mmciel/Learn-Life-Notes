#include <bits/stdc++.h>
using namespace std;

int greater1(char *s1, char *s2){
    int len1=strlen(s1),len2=strlen(s2);
    if(len1>len2)               return 1;
    if(len1 < len2)             return -1;
    for(int i=0; s1[i]!='\0'; i++){
        if(s1[i] > s2[i])       return 1;
        if(s1[i] < s2[i])       return -1;
    }
    return 0;
}
char *del(char *str)
{
    char *ch=str;
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i+1]=='\0')  break;
        if(str[i]!='0')     break;
    }
    ch=&str[i];
    return ch;
}
int main()
{
    char *p[10], str[102], *str1;
    int n;  scanf("%d",&n);     getchar();
    for(int i=0; i<n; i++){
        gets(str);
        str1=del(str);
        p[i]=(char*)malloc(sizeof(char)*(strlen(str1)+1));
        strcpy(p[i],str1);
    }
    for(int i=0; i<n-1; i++ )
        for(int j=i+1; j<n; j++)
            if(greater1(p[i],p[j]) == 1)    swap(p[i],p[j]);
    for(int i=0; i<n; i++)      puts(p[i]);
    return 0;
}




/**
#include <bits/stdc++.h>
using namespace std;

vector<string> a;
bool mycmp(const string& x,const string& y){
    if( x.size()==y.size() )    return x < y;
    return x.size() < y.size();
}
void myprint(const string& x){
    cout<<x<<endl;
}
int main()
{
    int n;  scanf("%d",&n);
    for(int i = 0;i<n;i++){
        string x,xx;    cin>>x;
        if(x=="0") a.push_back(x);
        else{
            for(string::iterator it2,it=x.begin();it!=x.end();it++){
                if(*it!='0'){
                    it2=it;
                    xx.assign( it2, x.end() );
                    break;
                }
                if(it==x.end()-1 && *it=='0')   a.push_back("0");
            }
            a.push_back(xx);
        }
    }
    sort(a.begin(),a.end(),mycmp);

    for_each(a.begin(),a.end(),myprint);
    return 0;
}

*/
