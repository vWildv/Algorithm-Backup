#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[105];

int main()
{
    while(cin>>n>>k)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int m=0,z;
        for(int i=0; i<n; i++)
        {
            z=86400-a[i];
            k-=z;
            m++;
            if(k<=0)
            {
                printf("%d\n",m);
                break;
            }
        }
    }
    return 0;
}
