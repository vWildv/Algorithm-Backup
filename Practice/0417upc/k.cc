#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    scanf("%d%d",&h,&w);
    int cnt=0;
    for (int i=0;i<h;i++){
        getchar();
        for(int j=0;j<w;j++){
            char c;
            scanf("%c",&c);
            //printf("%c\n",c);
            if(c=='#') cnt++;
        }
    }
    printf("%s\n",cnt==h+w-1?"Possible":"Impossible");
}