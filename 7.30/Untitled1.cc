#include <bits/stdc++.h>
using namespace std;

const int N=500005;

int n,k;
char a[N];
char f[2]={'A','B'};

int main(){
    scanf("%d%d",&n,&k);
    getchar();
    for(int i=1;i<=n;i++){
        scanf("%c",&a[i]);
    }
    if(k==2){
        int res=0; int k=0;
        for(int i=1;i<=n;i++){
            if(a[i]!=f[k]) res++;
            k^=1;
        }
        int cnt=0;k=1;
        for(int i=1;i<=n;i++){
            if(a[i]!=f[k]) cnt++;
            k^=1;
        }
        if(cnt>res){
            printf("%d\n",res);
            k=0;
            for(int i=1;i<=n;i++){
                printf("%c",f[k]);
                k^=1;
            }
        }
        else{
            printf("%d\n",cnt);
            k=1;
            for(int i=1;i<=n;i++){
                printf("%c",f[k]);
                k^=1;
            }
        }
        return 0;
    }
    a[n+1]=0;
    int res=0; int cnt=1;
    for(int i=1;i<=n;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
        else{
            if(cnt>1&&cnt%2==0){
                char c;
                for(c='A';c<='A'+k-1;c++){
                    if(c!=a[i]&&c!=a[i+1]){
                        break;
                    }
                }
                for(int j=1;j<=cnt;j+=2){
                    a[i-j+1]=c;
                    res++;
                }
                cnt=1;
            }
            else if(cnt>1&&cnt%2==1){
                char c;
                for(c='A';c<='A'+k-1;c++){
                    if(c!=a[i]){
                        break;
                    }
                }
                for(int j=2;j<=cnt;j+=2){
                    a[i-j+1]=c;
                    res++;
                }
                cnt=1;
            }
        }
    }
    printf("%d\n",res);
    for(int i=1;i<=n;i++) printf("%c",a[i]);
}

