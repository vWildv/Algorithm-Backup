#include <string>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int N=200005;
int a[N];
char s[N],tmp[N];

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,cnt=0,sum=0;
        scanf("%d",&n);
        scanf("%s",s);
        tmp[0]=s[0];
        for(int i=0;i<n;i++){
            if(s[i]==tmp[0]){
                a[cnt++]=i;
                sum++;
            }
        }
        int cnt_2=0;
        for(int i=1;i<n;i++){
            tmp[i]=s[i];
            cnt_2=0;
            for(int j=0;j<cnt;j++){
                if(a[j]+i<n&&s[a[j]+i]==tmp[i]){
                    sum++;
                    a[cnt_2++]=a[j];
                }
            }
            cnt=cnt_2;
        }
        printf("%d\n",sum%10007);
    }
    return 0;
}