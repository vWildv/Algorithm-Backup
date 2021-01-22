#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(y==0) printf("%d\n",x>0?x+1:abs(x));
    else{
        if((x>=0&&y>0)||(x<0&&y<0)) printf("%d\n",x>y?x-y+2:y-x);
        else{
            x=abs(x); y=abs(y);
            printf("%d\n",x>y?x-y+1:y-x+1);
        }
    }
}