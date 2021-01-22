#include <bits/stdc++.h>
using namespace std;

char s[100005];
int sum[100005];
int ss[100005];

int cnts,cnt,n;

int ssbsum(){
    if(cnts>cnt) return 1;
    else if(cnts==cnt){
        for(int i=cnt;i>=1;i--){
            if(ss[i]>sum[i]) return 1;
            else if(ss[i]<sum[i]) return 0;
        }
    }
    return 0;
}

void f(int pos){
    int i,j;
    int tmp=pos;
    //int pos=n/2;
    while(s[pos]=='0') pos++;
    int c=0; cnt=0;
    for(i=pos-1,j=n;j>pos-1&&i>0;i--,j--){
        sum[++cnt]=s[j]-'0'+s[i]-'0'+c;
        if(sum[cnt]>=10){
            sum[cnt]%=10;
            c=1;
        }
        else c=0;
    }
    while(j>pos-1){
        sum[++cnt]=s[j]-'0'+c;
        if(sum[cnt]>=10){
            sum[cnt]%=10;
            c=1;
        }
        else c=0;
        j--;
    }
    while(i>0){
        sum[++cnt]=s[i]-'0'+c;
        if(sum[cnt]>=10){
            sum[cnt]%=10;
            c=1;
        }
        else c=0;
        i--;
    }
    if(c==1) sum[++cnt]=1;
    if(ssbsum()){
        cnts=cnt;
        for(int i=cnt;i>=1;i--){
            ss[i]=sum[i];
        }
    }

    memset(sum,0,sizeof(sum));
    pos=tmp;
    while(s[pos]=='0') pos--;
    c=0; cnt=0;
    for(i=pos-1,j=n;j>pos-1&&i>0;i--,j--){
        sum[++cnt]=s[j]-'0'+s[i]-'0'+c;
        if(sum[cnt]>=10){
            sum[cnt]%=10;
            c=1;
        }
        else c=0;
    }
    while(j>pos-1){
        sum[++cnt]=s[j]-'0'+c;
        if(sum[cnt]>=10){
            sum[cnt]%=10;
            c=1;
        }
        else c=0;
        j--;
    }
    while(i>0){
        sum[++cnt]=s[i]-'0'+c;
        if(sum[cnt]>=10){
            sum[cnt]%=10;
            c=1;
        }
        else c=0;
        i--;
    }
    if(c==1) sum[++cnt]=1;
    if(ssbsum()){
        cnts=cnt;
        for(int i=cnt;i>=1;i--){
            ss[i]=sum[i];
        }
    }
}


int main(){
    scanf("%d",&n);
    scanf("%s",s+1);
    memset(ss,0x3f3f3f3f,sizeof(ss));
    cnts=0x3f3f3f3f;
    f(n/2);
    memset(sum,0,sizeof(sum));
    f(n/2+2);
    memset(sum,0,sizeof(sum));
    f(n/2+1);
    for(int i=cnts;i>=1;i--){
        printf("%d",ss[i]);
    }
    return 0;
}
/*
99
928586789881286837602622443489000000000000000000000000000000000000000058314147508226329133715876691
*/
