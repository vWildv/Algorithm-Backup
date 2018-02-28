#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
#define maxn 2200
string ma[maxn];
string mac[maxn];
int ans;
int n,m,t;
void solve(string s)
{
    int num=0;
    for(int i=0; i<s.length(); i++)
    {
       if(s[i]=='.')num++;
       else
       {
           if(num-t+1>0)
            ans=ans+num-t+1;
           num=0;
       }
    }
     if(num-t+1>0)
            ans=ans+num-t+1;
}
int main()
{

    scanf("%d%d%d",&n,&m,&t);
    for(int i=1; i<=n; i++)
        cin>>ma[i];
    ans=0;
    if(t==1)
    {

        for(int i=1; i<=n; i++)
            for(int j=0; j<m; j++)
            {
                if(ma[i][j]=='.')ans++;
            }
    }
    else
    {
        ans=0;

        for(int i=0; i<m; i++)
        {
            for(int j=1; j<=n; j++)
                mac[i]+=ma[j][i];
        }
        for(int i=1; i<=n; i++)
        {
            solve(ma[i]);
        }
        for(int i=0; i<m; i++)
        {
            solve(mac[i]);
        }

    }
    printf("%d\n",ans);

}
