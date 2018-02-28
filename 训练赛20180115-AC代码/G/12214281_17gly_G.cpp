#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int  f[40000];
int  w[16];
int  v[16];
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        memset(f,0,sizeof(f));
        for(int i=0;i<b;i++)
        {
            cin>>w[i]>>v[i];
        }
        if(a>40000){
            a=40000;
        }
        for(int i=0;i<b;i++)
        {
            for(int j=a;j>=w[i];j--)
            {
               f[j]=max(f[j],f[j-w[i]]+v[i]);
            }
        }
        cout<<f[a]<<endl;
    }
}
