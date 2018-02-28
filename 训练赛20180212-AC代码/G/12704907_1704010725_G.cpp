#include <vector>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> c;
int a[100010];
bool vis[100010];

int main(){
    c.clear();
    memset(vis,0,sizeof(vis));
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        if(vis[i]==1) continue;
        int cnt=1;
        vis[i]=1;
        int tmp=a[i];
        while(tmp!=i){
            vis[tmp]=1;
            tmp=a[tmp];
            cnt++;
        }
        c.push_back(cnt);
    }
    long long ans=0;
    sort(c.begin(),c.end());
    if(c.size()>=2){
        ans=c[c.size()-1]+c[c.size()-2];
        ans*=ans;
        for(int i=0;i<c.size()-2;i++) ans+=c[i]*c[i];
    }
    else ans=n*n;
    cout<<ans<<endl;
}