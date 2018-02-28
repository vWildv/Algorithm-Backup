#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,t,i;
    int ss[10000],s2[10000];
    while(scanf("%d%d",&n,&t)!=EOF)
    {
        int a,num=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ss[i]);
            s2[i]=86400-ss[i];
        }
        for(i=0; i<n; i++)
        {
            a=i;
            num+=s2[i];
            if(num>=t)
            {
                break;
            }
        }
        printf("%d\n",a+1);
    }
    return 0;
}
