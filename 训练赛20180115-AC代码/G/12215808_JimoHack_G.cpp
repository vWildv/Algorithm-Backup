#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <string>
#include <vector>
#include <map>
#define True 9999
#define MAXY 2012*16+10
#define MAXX 20+10
using namespace std;
int dp[MAXX][MAXY];
class Box
{
public :
    int V;
    int W;
};
void init()
{
    for(int i=0;i<MAXX;++i)
        for(int j=0;j<MAXY;++j)
           dp[i][j]=0;
}
int main()
{
    int n,m;
    while(cin>>m>>n)
    {
        Box box[200];
        int sum=0,summ=0;
        init();
        for(int i=1;i<=n;++i)
        {
            cin>>box[i].V>>box[i].W;
            sum+=box[i].V;
            summ+=box[i].W;
        }
        if(sum<m)
        {
            cout<<summ<<endl;
            continue;
        }
        for(int i=box[1].V;i<=m;++i)
            dp[1][i]=box[1].W;
        for(int i=2;i<=n;++i)
            for(int j=1;j<=m;++j)
                if(j>=box[i].V)
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-box[i].V]+box[i].W);
                else
                    dp[i][j]=dp[i-1][j];
        cout<<dp[n][m]<<endl;
    }
}
