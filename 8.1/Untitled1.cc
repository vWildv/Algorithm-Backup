#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=2;
ll tmp[N][N];
ll a[N][N];
char s[1000005];
ll m;
ll x0,x1,a1,b1;

void multi(ll a[N][N],ll b[N][N],int n)
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            tmp[i][j]=0;
        }
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        for(int k=0;k<n;k++)
        tmp[i][j]=(tmp[i][j]%m+(a[i][k]*b[k][j])%m)%m;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        a[i][j]=tmp[i][j];
}

ll res[N][N]; ll temp[N][N];
void Pow()
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            res[i][j]=0;
            temp[i][j]=0;
        }
    }
    for(int i=0;i<N;i++) res[i][i]=1,temp[i][i]=1;
    for(int k=strlen(s)-1;k>=0;k--)
    {
        int n=s[k]-'0';
        for(int i=1;i<=n;i++){
            multi(res,a,N);
        }
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++){
                if(i==j) temp[i][j]=1;
                else temp[i][j]=0;
            }
        multi(temp,a,N);
        multi(temp,a,N);
        for(int i=1;i<=3;i++) multi(a,a,N);
        multi(a,temp,N);
    }
    printf("%lld\n",(res[0][0]*x1%m+res[0][1]*x0%m)%m);
}

int main (){
    scanf("%lld%lld%lld%lld",&x0,&x1,&a1,&b1);
    long long n=0;
    getchar();
    scanf("%s",s);
    scanf("%lld",&m);
    for(int k=strlen(s)-1;k>=0;k--){
        if(s[k]>='1'&&s[k]<='9'){
            s[k]--;
            break;
        }
        else{
            s[k]='9';
        }
    }
    a[0][0]=a1;
    a[0][1]=b1;
    a[1][0]=1;
    a[1][1]=0;
    Pow();
    return 0;
}
