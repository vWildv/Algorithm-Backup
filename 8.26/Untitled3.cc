#include <bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f3f;

int nex[1000005],ret[1000005];
char a[1000005],b[1000005];
int alen,blen;

int pre(){
    int j=0,k=-1;
    nex[0]=-1;
    while(j<alen){
        if(k==-1||a[j]==a[k]){
            nex[++j]=++k;
            if(a[j]!=a[k]) nex[j]=k;
        }
        else k=nex[k];
    }
}

int kmp(){
    pre();
    int i=max(blen-alen,0),j=0;
    while(i<blen&&j<alen){
        if(j==-1||b[i]==a[j]) i++,j++;
        else j=nex[j];
    }
    return j;
}

int main(){
    int n;
    scanf("%d",&n);
    scanf("%s",b);
    blen=strlen(b);
    for(int i=2;i<=n;i++){
        scanf("%s",a);
        alen=strlen(a);
        int k=kmp();
        for(int i=k;i<alen;i++){
            b[blen]=a[i];
            blen++;
        }
    }
    printf("%s",b);
}
