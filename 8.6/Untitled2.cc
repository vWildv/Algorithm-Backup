#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod=1e9+7;

char s[100005];

int main(){
    scanf("%s",s);
    ll ans=1;
    for(int i=0;i<strlen(s);i++){
        int tmp;
        if(s[i]>='0'&&s[i]<='9') tmp=s[i]-'0';
        else if(s[i]>='A'&&s[i]<='Z') tmp=s[i]-'A'+10;
        else if(s[i]>='a'&&s[i]<='z') tmp=s[i]-'a'+36;
        else if(s[i]=='-') tmp=62;
        else if(s[i]=='_') tmp=63;
        for(int j=0;j<=5;j++){
            if((tmp&(1<<j))==0){
                ans=(ans*3ll)%mod;
            }
            else ans=(ans*1ll)%mod;
        }
    }
    printf("%lld\n",ans);
}
