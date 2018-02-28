#include<bits/stdc++.h>
using namespace std;

int main()
{
    int check[100050];
    int prime[100050];
    int cnt=0;
    memset(check,0,sizeof(check));
    check[1]=1;
    for(int i=2;i<=100007;i++){
        if(check[i])
            continue;
        prime[cnt++]=i;
        for(int j=i*2;j<=100007;j+=i)
            check[j]=1;
    }
    sort(prime,prime+cnt);
    int n,m;
    while(cin>>n>>m){
        if(n==2&&m==1){
            printf("2 2\n1 2 2\n");
            continue;
        }
        int pos=lower_bound(prime,prime+cnt,n+1)-prime;
        printf("2 %d\n",prime[pos]);
        printf("1 %d 2\n",n);
        for(int i=2;i<=n-2;i++)
            printf("%d %d %d\n",i,n,1);
        printf("%d %d %d\n",n-1,n,prime[pos]-n+1);
        int now=n-1;
        for(int i=1;now<m&&i<=n-2;i++){
            for(int j=i+1;now<m&&j<=n-1;j++){
                printf("%d %d %d\n",i,j,1000000000);
                now++;
            }
        }
    }
    return 0;
}