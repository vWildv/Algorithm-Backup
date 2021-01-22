#include <string.h>
#include <stdio.h>
using namespace std;

int nex[1000005];
char a[1000005];

int getnext(char p[]){
    int i,j;
    int len=strlen(p);
    nex[0]=0;
    for(i=1,j=0;i<len;i++){
        while(j>0&&p[i]!=p[j]) j=nex[j-1];
        if(p[i]==p[j]) j++;
        nex[i]=j;
    }
}

int main(){
    while(~scanf("%s",&a)&&a[0]!='.'){
        memset(nex,0,sizeof(nex));
        getnext(a);
        //for(int i=0;i<strlen(a);i++){
        //    printf("%d\n",nex[i]);
        //}
        int len=strlen(a);
        printf("%d\n",len%(len-nex[len-1])==0?len/(len-nex[len-1]):1);
    }
}
