#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
    /*for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(__gcd(i,j)==1){
                printf("%d %d %d\n",i,j,__gcd(i-j,i+j));
            }
        }
    }*/
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("YES\n");
    int x=0;
    for(int i=1;i<=n;i++){
        x=__gcd(a[i],x);
    }
    //printf("%d\n",x);
    if(x>1) printf("0\n");
    else{
        int cnt=0;
        for(int i=1;i<=n;i++){
            while(a[i]%2){
                int x=a[i]-a[i+1];
                int y=a[i]+a[i+1];
                a[i]=x;
                a[i+1]=y;
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
