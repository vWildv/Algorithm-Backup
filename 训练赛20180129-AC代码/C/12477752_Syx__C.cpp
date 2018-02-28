#include <iostream>
#include<cstdio>
#include<string.h>

using namespace std;
int n,a,b;
int main()
{
    while(~scanf("%d%d%d",&n,&a,&b))
    {int k = b % n;int ans = (n + a + k)% n;
    if(ans)printf("%d\n",ans);else printf("%d\n",n);
    }
}

