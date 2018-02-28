#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
long long int s[200005];
bool y[200005];
int ch[400005];
int main(){
    int a;
    long long int jie,jie1;
    while(~scanf("%d",&a)){
        jie=0;int m=0;
        memset(y,0,sizeof(y));
        memset(ch,0,sizeof(ch));
        for(int i=0;i<a;i++){scanf("%lld",&s[i]);ch[s[i]]++;if(m<s[i])m=s[i];}
        for(int i=1;i<=2*m;i++)ch[i]+=ch[i-1];
        sort(s,s+a);
        for(int i=0;i<a;i++){
            if(y[s[i]]==1)continue;
            y[s[i]]=1;
            jie1=0;
            for(int j=0;(j+1)*s[i]<=m;j++){
                long long int c=(j+2)*s[i];long long int d=s[i]*(j+1);
                jie1+=d*(ch[c-1]-ch[d-1]);
            }
            if(jie1>jie)jie=jie1;
        }
        printf("%lld\n",jie);
    }
    return 0;
}
