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
#define MAX 200000
using namespace std;
typedef long long int int64;
int64 n,m,k;
int64 num[MAX+5],cnt[MAX+5];
int main()
{
    while(~scanf("%lld",&n))
    {

        memset(cnt, 0, sizeof(cnt));
        int64 out,temp;
        out=0;
        for(int64 i=0; i<n; ++i)
        {
            scanf("%lld",&num[i]);
            ++cnt[num[i]];
        }
        if(n==1)
        {
            printf("%lld\n",num[0]);
        }
        else
        {
            for(int64 i=1; i<=MAX; ++i)
            {
                cnt[i]+=cnt[i-1];
            }
            ///sort(&num[0],&num[n-1]);
            for (int i=1; i<=MAX; i++)
            {
                if (cnt[i]-cnt[i-1]>0)
                {
                    temp=0;
                    for (int j=0; j<=MAX; j+=i)
                    {
                        temp+=(int64)(j*(cnt[min(j+i-1, MAX)]-cnt[j-1]));
                    }
                    out=max(out, temp);
                }
            }
            printf("%lld\n",out);
        }
    }
}
