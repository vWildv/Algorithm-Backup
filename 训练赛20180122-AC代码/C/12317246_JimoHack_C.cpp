#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int num[1000005];
int sum[1000005];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        if(n==0) break;
        for(int i=0; i<n; ++i)
        {
            scanf("%d",&num[i]);
            sum[i]=num[i];
        }
        int maxnum=sum[0];
        for (int i=1; i<n; ++i)
        {
            for (int j=0; j<i; ++j)
                if (num[i]+sum[j]>sum[i]&&num[i]>num[j])
                    sum[i]=sum[j]+num[i];
            maxnum=max(maxnum,sum[i]);
        }
        printf("%d\n",maxnum);
    }
}
