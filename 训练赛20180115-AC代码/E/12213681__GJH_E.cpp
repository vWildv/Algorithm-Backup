#include <iostream>
#include <cstdio>
using namespace std;

int C[1005][1005];

int main()
{
    for (int i=0;i<1005;i++)
    {
        C[i][0]=1;
    }
    for (int i=1;i<1005;i++)
    {
        for (int j=1;j<=i;j++)
        {
            C[i][j]=C[i-1][j-1]+C[i-1][j];
        }
    }
    int T;
    cin>>T;
    while (T--)
    {
        int a,b;
        cin>>a>>b;
        int s=C[a][b];
        int ans=0;
        while (s%2==0)
        {
            ans++;
            s/=2;
        }
        cout<<ans<<endl;

    }
}

