#include<iostream>
#include<cstdio>
using namespace std;
const int maxn=1001;
int a[maxn][maxn];
int main()
{
    int T;
    int n,m;
    while(~scanf("%d",&T))
    {
         for(int i=0; i<1000; i++)
        for(int j=0; j<1000; j++)
        {
            a[i][j]=0;
        }
        m=(T+1)/2;
        while(T--)
        {
            cin>>n;
            int i,j;
            if(n==0)
                i=0;
            else {i=n/1000;}
            j=n%1000;
            a[i][j]+=1;
        }
        for(int i=0; i<1000; i++)
            for(int j=0; j<1000; j++)
            {
                if(a[i][j]>=m)
                    cout<<1000*i+j<<endl;
            }


    }

}
