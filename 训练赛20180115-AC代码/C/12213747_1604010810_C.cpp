#include<iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;
typedef struct{
    char *ch;
    int length;
}HString;
int StrAssign(HString &T,char *ch)
{
    int i;
    char *c;
    for(i=0,c=ch;*c;i++,c++);
    if(!i){T.ch=NULL; T.length=0;}
    else{
        if(!(T.ch=(char*)malloc(i*sizeof(char))))
            return 0;
        T.length=i;
        for(;i>=0;--c,i--)
            T.ch[i]=*c;
    }
}
int Index(HString S,HString T)
{
    int i=0,j=0;
    while(i<S.length&&j<T.length){
            //cout<<S.ch[i]<<' '<<T.ch[j]<<endl;
        if(S.ch[i]==T.ch[j]){
            ++i; ++j;
        }
        else{
            i=i-j+1;
            j=0;
        }
    }
    if(j==T.length) cout<<"Warning"<<endl;
    else cout<<"Safe"<<endl;
}
int main()
{
    int p,l;
    char c1[100],c2[]="bkpstor";
    HString s1,s2;
    StrAssign(s2,c2);
    while(~scanf("%s",c1))
    {
        StrAssign(s1,c1);
        Index(s1,s2);
    }
}