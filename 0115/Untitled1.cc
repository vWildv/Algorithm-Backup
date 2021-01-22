#include <bits/stdc++.h>
using namespace std;

long long a[105][105];

int main(){
    long long n,m,k,x,y;
    scanf("%lld%lld%lld%lld%lld",&n,&m,&k,&x,&y);
    long long t=0;
/*
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            t++;
        }
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=m;j++){
            t++;
        }
    }

    printf("%lld\n",t);
*/
    if(n==1){
        long long c=k%m;
        long long ans=k/m;
        if(c==0){
            printf("%lld %lld %lld\n",ans,ans,ans);
            return 0;
        }
        for(int i=1;i<=m;i++){
            a[1][i]++;
            c--;
            if(c==0){
                printf("%lld %lld %lld\n",ans+a[1][i],ans,ans+a[x][y]);
                return 0;
            }
        }
    }
    else{
        if(k<=n*m){
            int flag=0;
            for(int i=1;;){
                for(int j=1;j<=m;j++){
                    a[i][j]++;
                    k--;
                    if(k==0){
                        //printf("%lld %lld %lld\n",a[i][j],ans,ans+a[x][y]);
                        //return 0;
                        flag=1;
                        break;
                    }
                }
                if(flag) break;
                if(i<n) i++;
                else i--;
            }
            long long mini=0x3f3f3f3f,maxn=-1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    mini=min(mini,a[i][j]);
                    maxn=max(maxn,a[i][j]);
                }
            }
            printf("%lld %lld %lld\n",maxn,mini,a[x][y]);
        }
        else{
            k-=m;
            long long t=2*(n-1)*m;
            long long c=k%t;
            long long ans=k/t;
            for(int i=1;i<=m;i++) a[1][i]+=(ans+1),a[n][i]+=ans;
            for (int i=2;i<=n-1;i++){
                for (int j=1;j<=m;j++){
                    a[i][j]+=ans*2;
                }
            }

            if(c==0){
                printf("%lld %lld %lld\n",max(ans*2,ans+1),min(ans*2,ans+1),a[x][y]);
                return 0;
            }

            int flag=0;
            for(int i=2;i<=n;i++){
                for(int j=1;j<=m;j++){
                    if(c==0){
                        //printf("%lld %lld %lld\n",a[i][j]+max(ans*2,ans+1),min(ans*2,ans+1),a[x][y]);
                        //return 0;
                        flag=1;
                        break;
                    }
                    a[i][j]++;
                    c--;
                }
                if(flag) break;
                //if(i<n) i++;
                //else i--;
            }
            for(int i=n-1;i>=1;i--){
                for(int j=1;j<=m;j++){
                    if(c==0){
                        //printf("%lld %lld %lld\n",a[i][j]+max(ans*2,ans+1),min(ans*2,ans+1),a[x][y]);
                        //return 0;
                        flag=1;
                        break;
                    }
                    a[i][j]++;
                    c--;

                }
                if(flag) break;
                //if(i<n) i++;
                //else i--;
            }
            long long mini=0x3f3f3f3f3f3f3f3f,maxn=-1;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++){
                    mini=min(mini,a[i][j]);
                    maxn=max(maxn,a[i][j]);
                }
            }
            printf("%lld %lld %lld\n",maxn,mini,a[x][y]);
        }
    }
    //printf("%lld %lld %lld\n",(ans-m)*2+maxn,(ans-m)*2-m+mini,(ans-m)*2+a[x][y]);
}
