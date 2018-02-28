#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int ac[20],wa[20];

int main(){
    int T;
    string t,s;
    scanf("%d",&T);
    while(T--){
        memset(ac,0,sizeof(ac));
        memset(wa,0,sizeof(wa));
        int num,n,m;
        scanf("%d%d",&n,&m);
        int tim=0,cnt=0;
        for(int i=0;i<m;i++){
            cin>>num>>t>>s;
            int ques=num-1000;
            if(ac[ques]) continue;
            if(s=="AC"){
                ac[ques]=1;
                cnt++;
                tim+=(t[1]-'0')*60+(t[3]-'0')*10+(t[4]-'0');
                tim+=wa[ques]*20;
            }
            else wa[ques]++;
        }
        printf("%d %d\n",cnt,tim);
    }
    return 0;
}