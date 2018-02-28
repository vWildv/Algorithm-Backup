#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <string>
#include <string.h>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#define MAXSEC 86400
using namespace std;
typedef long long int int64;
int n,m,k;
bool bg[2050][2050];
int sum=0;
void GetSitX()
{
    for(int i=0;i<n;++i)
    {
        int cnt=0;
        for(int j=0;j<m;++j)
        {
            if(bg[i][j]) ++cnt;
            if(j+1<m && bg[i][j+1])
            {
                continue;
            }
            else
            {
                sum+=(cnt-k+1>=0)?cnt-k+1:0;
                cnt=0;
            }
        }
    }
}
void GetSitY()
{
    for(int j=0;j<m;++j)
    {
        int cnt=0;
        for(int i=0;i<n;++i)
        {
            if(bg[i][j]) ++cnt;
            if(i+1<n && bg[i+1][j])
            {
                continue;
            }
            else
            {
                sum+=(cnt-k+1>=0)?cnt-k+1:0;
                cnt=0;
            }
        }
    }
}
int main()
{
    while(~scanf("%d%d%d",&n,&m,&k))
    {
        sum=0;
        getchar();
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                bg[i][j]=(getchar()=='.')?true:false;
            }
            getchar();
        }
//        for(int i=0;i<n;++i)
//        {
//            for(int j=0;j<m;++j)
//            {
//                cout<<bg[i][j]<<" ";
//            }
//            cout<<endl;
//        }
        GetSitX();
        GetSitY();
        printf("%d\n",(k==1)?sum>>1:sum);
    }
}
