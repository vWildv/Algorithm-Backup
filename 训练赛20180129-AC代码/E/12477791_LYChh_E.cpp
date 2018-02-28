#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <map>
using namespace std;
int s[20000005];
map<int,int>a;
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        a.clear();
        int ma,num=1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ma);
            a[ma]=1;
        }
        for(int i=1;;i++)
        {
            if(m<0)
            {
                break;
            }
            if(a[i]!=1)
            {
                m-=i;
                s[num++]=i;
            }
        }
        printf("%d\n",num-2);
        int k=0;
        for(int i=1;i<=num-2;i++)
        {
            if(k==0)
            {
                printf("%d",s[i]);
                k=1;
            }
            else
            {
                printf(" %d",s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
