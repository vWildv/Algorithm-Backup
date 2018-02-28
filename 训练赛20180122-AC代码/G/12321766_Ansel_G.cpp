#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
char a[10][10];
int ans;
int n,k;
bool check(int x,int y)
{
    for(int i=x-1; i>=0; i--)
    {
        if(a[i][y]=='*')
            return false;
    }
    for(int i=y-1; i>=0; i--)
    {
        if(a[x][i]=='*')
            return false;
    }
    return true;
}
void dfs(int m,int cnt)
{

    if(cnt==k)
    {
        ans++;
        return ;
    }
    if(m==n*n)
        return ;
    int x=m/n;
    int y=m%n;
    if(a[x][y]=='#' && check(x,y))
    {
        a[x][y]='*';
        dfs(m+1,cnt+1);
        a[x][y]='#';
    }
    dfs(m+1,cnt);
}
int main()
{

    while(cin>>n>>k)
    {
        ans=0;
        if(n==-1&&k==-1)
            break;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>a[i][j];
        dfs(0,0);
        cout<<ans<<endl;
    }
}
