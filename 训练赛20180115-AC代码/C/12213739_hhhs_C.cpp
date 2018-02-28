#include<string.h>
#include<iostream>
using namespace std;
int Index_KMP (char S[],char T[],int pos,int next[])
{
    int i=pos;
    int j=1;
    while(i<strlen(S)&&j<strlen(T))
    {

        if(j==0||S[i]==T[j])
        {
            i++;
            j++;
        }
        else j=next[j];
    }
    if(j>=strlen(T))return i+1-strlen(T);
    return 0;
}
void get_next(char T[],int next[])
{
    int i=1;
    next[1]=0;
    int j=0;
    while(i<strlen(T))
    {
        if(j==0||T[i]==T[j])
        {
            i++;
            j++;
            next[i]=j;
        }
        else j=next[j];
    }
}

int main()
{
    char S[105];
    char T[7]= {'b','k','p','s','t','o','r'};
    char c;
    while(cin>>S)
    {
        int next[strlen(T)+1];
        get_next(T,next);
        int Pos=Index_KMP(S,T,1,next);
        if(Pos!=0)
            cout<<"Warning"<<endl;
        else
            cout<<"Safe"<<endl;
    }
    return 0;
}