#include<bits/stdc++.h>
using namespace std;
bool vis[25];
int cot[25];
int main()
{
    int t,n,m;
    cin>>t;
    while(t--&&cin>>n>>m)
    {
        memset(vis,0,sizeof(vis));
        memset(cot,0,sizeof(cot));
        int tol = 0,ans=0;
        while(m--)
        {
            int a,b,c;
            string s;
            scanf("%d %02d:%02d",&a,&b,&c);
            cin>>s;
            a-=1000;
            if(vis[a]) continue;
            if(s=="AC")
            {
                tol++;
                vis[a] = 1;
                ans += cot[a]*20 + b*60 + c;
            }
            else
                cot[a]++;
        }
        cout<<tol<<" "<<ans<<endl;
    }
}
