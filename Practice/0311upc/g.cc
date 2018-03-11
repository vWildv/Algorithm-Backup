#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
 
int n,len,a[100005],b[100005],c[100005];
char tmp[128];

int judge(int a[]){  
    for(int i=1;i<=len/2;i++)  
        if(a[i]!=a[len-i+1]) return 0;  
    return 1;
}

int main(){
    scanf("%d%s",&n,tmp);  
    len=strlen(tmp);  
    for(int i=0;i<len;i++){  
        if(tmp[i]>='0'&&tmp[i]<='9')  
            a[len-i]=tmp[i]-'0';  
        if(tmp[i]>='A'&&tmp[i]<='Z')  
            a[len-i]=tmp[i]-'A'+10;  
    }  
    if(judge(a)){
        printf("STEP=0\n");
        return 0;
    }
    for(int k=1;k<=30;k++){  
        memset(c,0,sizeof(c));  
        for(int i=1;i<=len;i++) b[i]=a[len-i+1];  
        int x=0;  
        for(int i=1;i<=len;i++){  
            x+=a[i]+b[i];  
            c[i]+=x%n;
            x/=n;  
        }
        while(x){
            c[++len]=x%n;
            x/=n;
        } 
        if(judge(c)){
            printf("STEP=%d\n",k);
            return 0;
        }  
        for(int i=1;i<=len;i++) a[i]=c[i];
    }  
    printf("Impossible!\n");  
    return 0;  
} 