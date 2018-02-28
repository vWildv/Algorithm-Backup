#include<bits/stdc++.h>
using namespace std;

#define maxn 100005
int main()
{
    int a[maxn];
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         int sum=1;
        for(int i=1;i<n;i++)
        {
            if(sum==0) sum++;
            else
            {
                if(a[i]==1) sum--;
                else sum++;
            }
        }
        if(sum!=0) printf("No\n");
        else printf("Yes\n");
    }
}