#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int h[100000],f[100000];
int main()
{
    int n;
    while (cin>>n)
    {
        memset(h,0,sizeof(h));
        memset(f,0,sizeof(h));
        for (int i=0; i<n; i++)
            cin>>h[i];
        for(int i=0; i<n; i++)
        {
            int t=0;
            for(int j=0; j<i; j++)
                if(h[j]>=h[i])
                    t=max(t,f[j]);
            f[i]=t+1;
        }
        int m=0;
        for(int i=0; i<n; i++)
        {
            int t=0;
            for(int j=0; j<i; j++)
                if(h[j]<h[i])
                    t=max(t,f[j]);
            f[i]=t+1;
            m=max(m,f[i]);
        }
        cout<<m<<endl;
    }
}
