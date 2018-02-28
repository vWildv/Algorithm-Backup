#include <iostream>
using namespace std;
char a[10][10];
int cnt,n,k,ans,num;
bool judge(int x,int y)
{
    if(a[x][y]=='.')
        return true;
	if(a[x][y]=='*') return true;
    for(int i=n; i>=1; i--)
    {
        if(a[x][i]=='*')
            return true;
    }
    for(int i=n; i>=1; i--)
    {
        if(a[i][y]=='*')
            return true;
    }
    return false;
}
void dfs(int cx,int cy)
{
    if(num==k)
    {
        ans++;
        return;
    }
    for(int i=cx; i<=n; i++)
        for(int j=cy; j<=n; j++)
        {
            if(judge(i,j))
                continue;
            a[i][j] = '*';
            num++;
            //cout<<i<<" "<<j<<" "<<num<<endl;
            dfs(i+1,1);
			//cout<<i<<" "<<j<<" "<<num<<endl;
            a[i][j] = '#';
            num--;
        }
}
int main()
{
    while(cin>>n>>k)
    {
        if(n==-1&&k==-1) break;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                cin>>a[i][j];
        ans = 0;
        num = 0;
        dfs(1,1);
        cout<<ans<<endl;
    }
    return 0;
}
