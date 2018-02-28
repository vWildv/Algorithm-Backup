#include<iostream>
#include<cstdio>
using namespace std;
int ans[10005];
bool check(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=(n%10);
        n/=10;
        if(sum>10)
            return false;
    }
    if(sum==10 && n==0)
        return true;
    return false;
}
int main()
{
    int ans[10005];
    int tmp=0;
    int cnt=0;
    for(int i=19; i<20000000; i+=9)
        if(check(i))
        {
            cnt++;
            ans[cnt]=i;
            if(cnt==10001)
                break;
        }
    int k;
    while(~scanf("%d",&k))
    {
        printf("%d\n",ans[k]);
    }



}
