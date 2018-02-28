#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <string>
#include <vector>
#include <map>
#define True 9999
using namespace std;
typedef long long int  int64;
int64 C[1005][1005];
void init()
{
    C[1][0]=1;
    C[1][1]=1;
    for(int i=1;i<=1000;++i)
        for(int j=0;j<=i;++j)
        {
            if(j==0||j==i)
                C[i][j]=1;
            else
                C[i][j]=C[i-1][j-1]+C[i-1][j];
        }
}
int main()
{
    init();
    int T;
    cin>>T;
    for(int i=1;i<=T;++i)
    {
        int n,m;
        cin>>n>>m;
        int cnt=0;
        int ans=C[n][m];
        while(ans>>1==1.0*ans/2)
        {
            ans>>=1;
            ++cnt;
        }
        cout<<cnt<<endl;
    }
}
