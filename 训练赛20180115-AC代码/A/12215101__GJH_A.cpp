#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int mp[10][10],mp2[10][10];

int check(int n)
{
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if (mp[i][j]==-1 && mp2[i][j]==1) return -1;

    for (int i=0;i<n;i++)
    {
        bool key=0;
        for (int j=0;j<n;j++)
        {
            if (key&&mp2[i][j]==1) return -1;
            if (mp[i][j]==-1) key=0;
            if (mp2[i][j]==1) key=1;
        }
    }

    for (int i=0;i<n;i++)
    {
        bool key=0;
        for (int j=0;j<n;j++)
        {
            if (key&&mp2[j][i]==1) return -1;
            if (mp[j][i]==-1) key=0;
            if (mp2[j][i]==1) key=1;
        }
    }

    int sum=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if (mp2[i][j]==1) sum++;
    return sum;

}

int main()
{
    int n;
    while (cin>>n)
    {
        if (n==0) return 0;
        memset(mp,0,sizeof(mp));

        for (int i=0; i<n; i++)
        {
            string str;
            cin>>str;
            for (int j=0; j<n; j++)
                if (str[j]=='X') mp[i][j]=-1;
        }

        int s=1;
        for (int i=0; i<n*n; i++) s*=2;

        int ans=0;
        for (int k=0; k<s; k++)
        {
            memset(mp2,0,sizeof(mp2));
            int q=k;
            for (int i=0;i<n;i++)
            {
                for (int j=0;j<n;j++)
                {
                    if (q%2==0) mp2[i][j]=1;
                    q/=2;
                }
            }
            if (check(n)>ans) ans=check(n);
        }
        cout<<ans<<endl;
    }
}
