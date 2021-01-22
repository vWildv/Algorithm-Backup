#include <bits/stdc++.h>
using namespace std;

string s[100005];
int a[100005];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        cin>>s[i];
        if(a[i]) a[i]=-1;
        else a[i]=1;
    }
    int f,cnt,pos=1,go;
    while(m--){
        scanf("%d%d",&f,&cnt);
        if(!f) f=-1;
        go=f*cnt*a[pos];
        if(pos+go<1) pos=pos+go+n;
        else if(pos+go>n) pos=(pos+go)%n;
        else pos+=go;
    }
    cout<<s[pos]<<endl;
}