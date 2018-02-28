#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>
#include <map>
using namespace std;
#define maxn 2005

int main()
{

    int n,m,k,cnt;
    while(~scanf("%d%d%d",&n,&m,&k))
    {
         char mapp[n][m];
        int i,j;
        int ways=0;
        cnt=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",mapp[i]);
        }
        int combine;
        for(i=0;i<n;i++)
        {
            combine=0;
            for(j=0;j<m;j++)
            {
                if(mapp[i][j]=='.')
                {
                    combine++;
                    if(combine>=k) ways++;
                }
                else combine=0;
            }
        }
        for(i=0;i<m;i++)
        {
            combine=0;
            for(j=0;j<n;j++)
            {
                if(mapp[j][i]=='.')
                {
                    combine++;
                    if(combine>=k) ways++;
                }
                else combine=0;
            }
        }
        if(k==1) printf("%d\n",ways/2);
        else printf("%d\n",ways);
    }
}
