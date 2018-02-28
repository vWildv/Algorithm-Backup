#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#define Init0(x) memset(x,sizeof(x),0);
#define Init_(x) memset(x,sizeof(x),-1);
using namespace std;
typedef long long int int64;
int cnt[1005];
int main()
{
    int n,a,b;
    while(~scanf("%d",&n))
    {
        int sum=0;
        int maxs=-1;
        for(int i=0;i<1005;++i)
                cnt[i]=0;
        for(int i=1;i<=n;++i)
        {
                int tmp=-1;
                scanf("%d",&tmp);
                ++cnt[tmp];
                maxs=max(maxs,cnt[tmp]);
        }
        for(int i=1;i<=1000;++i)
        {
                sum+=cnt[i];
        }
        cout<<sum-maxs<<endl;
    }
}

