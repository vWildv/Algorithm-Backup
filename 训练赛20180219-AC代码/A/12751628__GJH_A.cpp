#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,m;
        cin>>n>>m;
        int q=0;
        int ans=0;
        map<string,int> mp;
        for (int i=0;i<m;i++)
        {
            string num,time,ac;
            cin>>num>>time>>ac;
            if (mp[num]==-1) continue;
            else if (ac=="AC")
            {
                q++;
                ans+=(time[0]-'0')*60*10+(time[1]-'0')*60+(time[3]-'0')*10+(time[4]-'0');
                ans+=mp[num]*20;
                mp[num]=-1;
            }
            else mp[num]++;
        }
        cout<<q<<" "<<ans<<endl;
    }
}

