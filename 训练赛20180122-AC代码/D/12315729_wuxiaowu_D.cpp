#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
 int a[32768];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
       
        memset(a,0,sizeof(a));
        int x;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&x);
            a[x]++;
        }
        for(int i=0;i<=32768;i++)
        {
            if(a[i]>=(n+1)/2)
            {
                printf("%d\n",i);
                break;



            }
        }
    }
}
