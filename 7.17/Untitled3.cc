#include <bits/stdc++.h>
using namespace std;

int va[300],vb[300];

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        memset(va,0,sizeof(va));
        memset(vb,0,sizeof(vb));
        string a,b;
        cin>>a;
        cin>>b;
        if(a.length()>b.length()){
            printf("NO\n");
            continue;
        }
        int flag=1; int i,j;
        for(i=0,j=0;i<a.length();){
            if(j==b.length()){
                flag=0;
                break;
            }
            if(a[i]==b[j]){
                i++;
                j++;
                va[a[i-1]]=1;
                vb[b[j-1]]=1;
                continue;
            }
            else{
                if(j==0||va[b[j]]==0||b[j]!=b[j-1]){
                    flag=0;
                    break;
                }
                else{
                    j++;
                }
            }
        }
        while(j<b.length()){
            if(b[j]!=b[j-1]||va[b[j]]==0){
                flag=0;
                break;
            }
            j++;
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
}
