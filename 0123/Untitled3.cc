#include <bits/stdc++.h>
using namespace std;

struct node{
    int l,r;
}a[26];

int vis[1000005];

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    string s;
    cin>>s;
    for(int i=0;i<26;i++) a[i].l=0x3f3f3f3f;
    for(int i=1;i<=n;i++){
        a[s[i-1]-'A'].l=min(a[s[i-1]-'A'].l,i);
        a[s[i-1]-'A'].r=max(a[s[i-1]-'A'].r,i);
    }
    for(int i=0;i<26;i++){
        for(int j=a[i].l;j<=a[i].r;j++) vis[j]++;
    }
    int cnt=*max_element(vis,vis+n);
    printf("%s\n",cnt>k?"YES":"NO");
}
