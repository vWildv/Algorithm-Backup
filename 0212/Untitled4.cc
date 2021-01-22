#include <bits/stdc++.h>
using namespace std;

char s[40];
char tmps[20];
map<pair<string,string>,int> vis;

int main(){
    int n;
    scanf("%d",&n);
    scanf("%s",s);
    int st=(1<<n);
    string a,b;
    for(int c=0;c<st;c++){
        a=""; b="";
        for(int i=0;i<n;i++){
            if(c&(1<<i)) a+=s[i];
            else b+=s[i];
        }
        vis[make_pair(a,b)]=1;
    }
/*    for(int i=2*n-1,j=0;i>=n;i--){
        tmps[j++]=s[i];
    }
*/
    int ans=0;
    for(int c=0;c<st;c++){
        a=""; b="";
        for(int i=0;i<n;i++){
            if(c&(1<<i)) a+=tmps[i];
            else b+=tmps[i];
        }
        ans+=vis[make_pair(a,b)];
    }
    printf("%d\n",ans);
}
