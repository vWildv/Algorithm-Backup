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
    while(cin>>n>>t)
    {
        int sum=0;
        int day=0;
        bool isok=false;
        for(int i=1;i<=n;++i)
        {
            int tmp;
            scanf("%d",&tmp);
            sum+=(MAXSEC-tmp);
            (sum>=t&&!isok)&&(day=i,isok=true);
        }
        printf("%d\n",day);
    }
}
