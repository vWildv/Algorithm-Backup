#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        int a=0;
        int b=0;
        scanf("%d%d",&m,&n);
        for(int i=1;i<=n;i++)
        {
            int p=m;
            while(p%2==0)
            {
                p/=2;
                a++;
            }
            m--;
        }
        for(int i=1;i<=n;i++)
        {
            int q=i;
            while(q%2==0)
            {
                q/=2;
                b++;
            }
        }
        printf("%d\n",a-b);
    }
    return 0;
}
