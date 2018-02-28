#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
#define maxn 2000
int nnext[maxn+1];
typedef char sstring[maxn+1];
sstring T;
void getnnext(sstring T)
{
    nnext[1]=0;
    int k=0,j=1;
    while(j<=T[0])
    {
        if(k==0||T[k]==T[j])
        {
            k++;
            j++;
            nnext[j]=k;
        }
        else
            k=nnext[k];
    }
}
int kmp(sstring S)
{

    int i=1;
    int j=1;
    while(i<=S[0]&&j<=T[0])
    {
        if(S[i]==T[j]||j==0)
        {
            i++;
            j++;
        }
        else
        {
            j=nnext[j];
        }
    }
    if(j>T[0])return i-T[0];
    return -1;
}
void sstringassign(sstring &S,char *s)
{
    int len=0;
    while(s[len]!='\0')
    {
        len++;
    }
    S[0]=len;
    for(int i=1; i<=len; i++)
    {
        S[i]=s[i-1];
    }
    return;
}
int main()
{
    char t[10]="bkpstor";
    sstringassign(T,t);
    getnnext(T);
    char s[maxn];
    while(gets(s))
    {
        sstring S;
        sstringassign(S,s);
        if(kmp(S)<0)
        {
            printf("Safe\n");
        }
        else
            printf("Warning\n");

    }


}
