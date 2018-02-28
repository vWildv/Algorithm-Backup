#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    while(~scanf("%d%d%d",&n,&a,&b))
    {
        b%=n;
        if(b<0)
            b=n+b;
        int ans=(a+b)%n;
        if(ans==0)
            printf("%d\n",n);
        else
            printf("%d\n",ans);
    }
}
