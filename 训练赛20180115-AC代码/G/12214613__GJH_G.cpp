#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int w[20],v[20];
int main()
{
    int m,n;
    while (cin>>m>>n)
    {
        memset(w,0,sizeof(w));
        memset(v,0,sizeof(v));
        int s=1;
        for (int i=0;i<n;i++)
        {
            cin>>w[i]>>v[i];
            s*=2;
        }
        int ans=0;
        for (int i=0;i<s;i++)
        {
            int weight=0,value=0;
            int k=i;
            for (int j=0;j<n;j++)
            {
                if (k%2==1)
                {
                    weight+=w[j];
                    value+=v[j];
                }
                k/=2;
            }
            if (weight<=m && value>ans) ans=value;
        }
        cout<<ans<<endl;
    }
}
