#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n){
        int x,y;
        LL ans=0;
        map<int,int>mpx,mpy;
        map<pair<int,int>,int>mpxy;
        map<int,int>::iterator itx,ity;
        map<pair<int,int>,int>::iterator itxy;
        for(int i=1;i<=n;i++){
            cin>>x>>y;
            mpx[x]++;
            mpy[y]++;
            mpxy[make_pair(x,y)]++;
        }
        for(itx=mpx.begin();itx!=mpx.end();itx++){
            LL num=itx->second;
            ans+=num*(num-1)/2;
        }
        for(ity=mpy.begin();ity!=mpy.end();ity++){
            LL num=ity->second;
            ans+=num*(num-1)/2;
        }
        for(itxy=mpxy.begin();itxy!=mpxy.end();itxy++){
            LL num=itxy->second;
            ans-=num*(num-1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

