#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a[1005];
    int n;
    while(~scanf("%d",&n))
    {
        int ans=0,maxa=0;
        int tmp;
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&tmp);
            a[tmp]++;
            maxa=max(maxa,a[tmp]);
        }
        cout<<n-maxa<<endl;
    }

}





