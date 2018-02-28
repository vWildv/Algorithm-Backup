
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<string.h>
#include<math.h>
using namespace std;
int n,k;
char ss[10][10];
int vis[10];int l=0,cnt=0;
void dfs(int i)
{
	if(cnt==k)
	{
		l++;
        return ;
	}
	if(i>=n){
    return ;}
     for(int j=0;j<n;j++)
     {
     	if(ss[i][j]=='#'&&!vis[j])
     	{
     	    vis[j]=1;
     	    cnt++;
     	    dfs(i+1);
     	    cnt--;
     	    vis[j]=0;
     	}
     }
    dfs(i+1);
}
int main()
{
    while(cin>>n>>k)
    {
    	memset(vis,0,sizeof(vis));
    	if(n==-1&&k==-1)break;
    	for(int i=0;i<n;i++)
    	{
    		scanf("%s",ss[i]);
    	}
    	dfs(0);
        cout<<l<<endl;
        l=0;cnt=0;
    }
}
