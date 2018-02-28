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
int n,t;
int main()
{
    while(~scanf("%d",&n))
    {
        int num[n+5];
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&num[i]);
        }
        for(int i=1;i<=n;++i)
        {
            if(num[i]>0 && num[i]%2>0 && i<n && num[i+1])
            {
                num[i]=0;
                --num[i+1];
            }
            if(num[i]>0 && num[i]%2==0)
            {
                num[i]=0;
            }
        }
        bool ok=true;
//        for(int i=1;i<=n;++i)
//        {
//            cout<<num[i]<<",";
//        }
//        cout<<endl;
        for(int i=n;i>=1;--i)
        {
            if(num[i]!=0)
            {
                ok=false;
                break;
            }
        }

        (ok)?printf("YES\n"):printf("NO\n");
    }
}
