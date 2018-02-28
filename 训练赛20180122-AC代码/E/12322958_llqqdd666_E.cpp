#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int xbshu[100005][12];
int main()
{
    int n,i,j,maxt;
    int x,t;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        maxt=0;
        memset(xbshu,0,sizeof(xbshu));
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&x,&t);
            xbshu[t][x]++;
            if(maxt<t)
            {
                maxt=t;
            }
        }
        for(i=maxt-1; i>=0; i--)
        {
            xbshu[i][0]+=max(xbshu[i+1][1],xbshu[i+1][0]);
            for(j=1; j<11; j++)
            {
                xbshu[i][j]+=max(max(xbshu[i+1][j-1],xbshu[i+1][j]),xbshu[i+1][j+1]);
            }
        }
        printf("%d\n",xbshu[0][5]);
    }
    return 0;
}
