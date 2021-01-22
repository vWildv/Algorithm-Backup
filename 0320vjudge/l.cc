#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

char f[100],m[100];
int a[26][2];

void back(int x){
    if(a[x][0]!=-1&&a[x][0]!=x) back(a[x][0]);
    if(a[x][1]!=-1&&a[x][1]!=x) back(a[x][1]);
    printf("%c",x+'A');
}

void F(int p1,int p2,int q1,int q2){
    int pos;
    for(pos=q1;pos<=q2;pos++)
        if(m[pos]==f[p1]) break;
    if(pos>q1){
        a[m[pos]-'A'][0]=f[p1+1]-'A';
        F(p1+1,p1+pos-q1,q1,pos-1);
    }
    if(pos<q2){
        a[m[pos]-'A'][1]=f[p1+1+pos-q1]-'A';
        F(p1+1+pos-q1,p2,pos+1,q2);
    }
}

int main(){
    while(~scanf("%s%s",f,m)){
        memset(a,0xff,sizeof(a));
        int len=strlen(f);
        F(0,len-1,0,len-1);
        back(f[0]-'A');
        printf("\n");
    }
}