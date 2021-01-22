#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int a[100005];

int main(){
    int n,t,sum=0;
    scanf("%d%d",&n,&t);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>=t){
            cnt1=i+1;
            break;
        }
        cnt1++;
    }
    sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=a[i];
        if(sum>=t){
            cnt2=n-i;
            break;
        }
        cnt2++;
    }
    if(a[0]>t) cnt1=0;
    if(a[n-1]>t) cnt2=0;
    if(cnt2>cnt1) printf("Nathan\n");
    else if(cnt1>cnt2) printf("Yan\n");
    else printf("Empate\n");
}