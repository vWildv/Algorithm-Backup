#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        printf("%d\n",a[n/2]);
    }
    return 0;
}