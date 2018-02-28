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
using namespace std;
typedef long long int int64;
int cnt=0;
int64 num[10005];
bool isok(int x)
{
    int bit[100];
    int cnt=0;
    while(x)
    {
        bit[cnt++]=x%10;
        x/=10;
    }
    int sum=0;
    for(int i=0;i<cnt;++i)
    {
        sum+=bit[i];
    }
    return (sum==10)?true:false;
}
void init()
{
    num[1]=19;
    cnt=2;
    for(int i=27;cnt<=10000;++i)
    {
        if(isok(i))
        {
            num[cnt++]=i;
        }
    }
}
int main()
{
    init();
    int n;
    while(~scanf("%d",&n))
    {
        printf("%lld\n",num[n]);
    }
}
