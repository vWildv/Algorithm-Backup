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
int n,x;
int main()
{
    while(~scanf("%d%d",&n,&x))
    {
        int sum=0;
        for(int i=0;i<n;++i)
        {
            int tmp;
            scanf("%d",&tmp);
            sum+=tmp;
        }
        ///cout<<sum<<endl;
        printf((x-sum==(n-1))?"YES\n":"NO\n");
    }
}
