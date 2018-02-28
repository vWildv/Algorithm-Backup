#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <map>
#define OFF -1
#define Mod  10007
using namespace std;
typedef long long int int64;
int64 n,m;
int64 Next[2000005];
char str[2000005];
int64 num[2000005];
void GetNext()
{
    Next[0]=OFF;
    for(int pstart=0,pend=OFF;str[pstart];)
    {
        if(pend==OFF||str[pstart]==str[pend])
            Next[++pstart]=++pend;
        else
            pend=Next[pend];
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        memset(num,0,sizeof(num));
        scanf("%lld",&n);
        getchar();
        for(int i=0; i<n; ++i)
        {
            str[i]=getchar();
        }
        str[n]='\0';
        GetNext();
        for(int i=1; i<=n; ++i)
            ++num[Next[i]];
        int ans=0;
        for(int i=1; i<=n; ++i)
            if(num[i])
            {ans=(ans+num[i])%Mod;}
        printf("%lld\n",(ans+n)%Mod);
    }
}
