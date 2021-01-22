#include <vector>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

string s[2005];

int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=0;i<n;i++) cin>>s[i];
    int sum=0;
    for(int i=0;i<n;i++){
        int t=0;
        for(int j=0;j<m;j++){
            if(s[i][j]=='.') t++;
            else{
                if(t>=k) sum+=t-k+1;
                t=0;
            }
        }
        if(t>=k) sum+=t-k+1;
    }
    if(k!=1){
        for(int i=0;i<m;i++){
            int t=0;
            for(int j=0;j<n;j++){
                if(s[j][i]=='.') t++;
                else{
                    if(t>=k) sum+=t-k+1;
                    t=0;
                }
            }
            if(t>=k) sum+=t-k+1;
        }
    }
    printf("%d\n",sum);
    return 0;
}