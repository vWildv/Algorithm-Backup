#include<bits/stdc++.h>
#define LL long long
using namespace std;
//const int MAXN = 100010;

string room[2005];

int main()
{
    ios::sync_with_stdio(false);
    int n,m,k;
    while(cin>>n>>m>>k){
        LL sum=0;
        for(int i=0;i<n;i++){
            cin>>room[i];
            for(int j=0;j<m;j++)
                if(room[i][j]=='.')
                    sum++;
        }
        if(k==1){
            cout<<sum<<endl;
            continue;
        }
        LL ans=0;
        for(int i=0;i<n;i++){
            int la=-1;
            for(int j=0;j<m;j++){
                if(room[i][j]=='*'){
                    ans+=(j-la-1>=k)?(j-la-k):0;
                    la=j;
                }
                else if(j==m-1)
                    ans+=(m-la-1>=k)?(m-la-k):0;
            }
        }
        for(int j=0;j<m;j++){
            int la=-1;
            for(int i=0;i<n;i++){
                if(room[i][j]=='*'){
                    ans+=(i-la-1>=k)?(i-la-k):0;
                    la=i;
                }
                else if(i==n-1)
                    ans+=(n-la-1>=k)?(n-la-k):0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
