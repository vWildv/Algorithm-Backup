#include <bits/stdc++.h>
using namespace std;

char a[100005];
char b[100005];
int vis[256];

int main(){
    string tmp;
    cin>>tmp;
    scanf("%s",a);
    for(int i=0;i<tmp.length();i++){
        vis[tmp[i]]=1;
    }
    int pos=-1;
    int lena=strlen(a);
    for(int i=0;i<lena;i++){
        if(a[i]=='*') pos=i;
    }
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s",b);
        int lenb=strlen(b);
        if(pos==-1){
            int flag=1;
            if(lena==lenb){
                for(int i=0;i<=lena;i++){
                    if(a[i]!=b[i]){
                        if(a[i]!='?'){
                            flag=0;
                            break;
                        }
                        else if(!vis[b[i]]){
                            flag=0;
                            break;
                        }
                    }
                }
            }
            else flag=0;
            printf("%s\n",flag?"YES":"NO");
        }

        else{
            if(lenb<lena-1){
                printf("NO\n");
                continue;
            }
            int flag=1;
            for(int i=0;i<pos;i++){
                if(a[i]!=b[i]){
                    if(a[i]!='?'){
                        flag=0;
                        //printf("1\n");
                        break;
                    }
                    else if(!vis[b[i]]){
                        //printf("2\n");
                        flag=0;
                        break;
                    }
                }
            }
            for(int i=pos+1,j=lenb-lena+pos+1;i<lena;i++,j++){
                if(a[i]!=b[j]){
                    if(a[i]!='?'){
                        flag=0;
                        //printf("3\n");
                        break;
                    }
                    else if(!vis[b[j]]){
                        flag=0;
                        //printf("4\n");
                        break;
                    }
                }
            }
            for(int i=pos;i<lenb-lena+pos+1;i++){
                if(vis[b[i]]){
                    flag=0;
                    //printf("5\n");
                    break;
                }
            }
            printf("%s\n",flag?"YES":"NO");
        }
    }
}
