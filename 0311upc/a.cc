#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
 
string a[30],b;        
int n,vis[30],maxlen=0,Max=0;
 
bool cmp(string s,int pos,int j){
    for(int i=pos;i<s.size();i++)
        if(s[i]!=a[j][i-pos]) return 0;
    return 1;
}
 
void dfs(string s){
    int len=s.size();                          
    maxlen=max(maxlen,len);
    for(int i=max(len-Max,0);i<len;i++){
        for(int j=0;j<n;j++){
            if(vis[j]==2) continue;
            if(a[j].size()<=len-i) continue;          
            if(!cmp(s,i,j)) continue;               
            vis[j]++;
            dfs(s+a[j].substr(len-i,a[j].size()-len+i));
            vis[j]--;
        }
    }
}
 
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i].size()>Max) Max=a[i].size();
    }
    cin>>b;
    dfs(b);
    printf("%d\n",maxlen);
}