#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    int tmp=abs(b);
    int x=tmp%n;
    if(b>0)
    {
        int ans=a+x;
        while(ans>=n)
        {
            ans%=n;
        }
        if(ans==0)
            printf("%d\n",n);
        else
            printf("%d\n",ans);
    }
    else if(b==0)
        printf("%d\n",a);
    else
    {
        int ans=a-x;
        if(ans<=0)
            printf("%d\n",n+ans);
        else
            printf("%d\n",ans);
    }
    return 0;
}
