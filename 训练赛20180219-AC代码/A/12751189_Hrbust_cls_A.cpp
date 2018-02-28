#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#include<map>
#define LL long long
using namespace std;
const int MAXN = 100010;
const int INF = 0x3f3f3f3f;

int cal(string t)
{
    return ((t[0]-'0')*10+(t[1]-'0'))*60+(t[3]-'0')*10+(t[4]-'0');
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        int no;
        string time,res;
        map<int,int>mp;
        int tot=0;
        int cnt=0;
        for(int i=1;i<=m;i++){
            cin>>no>>time>>res;
            if(res=="AC"){
                if(mp[no]<0) continue;
                mp[no]+=cal(time);
                tot+=mp[no];
                cnt++;
                mp[no]=-1;
            }
            else{
                if(mp[no]<0) continue;
                mp[no]+=20;
            }
        }
        cout<<cnt<<' '<<tot<<endl;
    }
    return 0;
}