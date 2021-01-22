#include<bits/stdc++.h>
using namespace std;
char s[150];
char s1[150];
vector<char> v[10];
char getnum(int l,int r){
    int ans=0;
    for(int i=l;i<=r;i++){
        ans=ans*2+(s[i]-'0');
    }
    if(ans<=9){
        return (char)('0'+ans);
    }
    else{
        return (char)('a'+ans-10);
    }
}
int main(){
    int t;
    int key=0;
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        int len=strlen(s);
        for(int i=0;i<len;i+=4){
            s1[i/4]=getnum(i,i+3);
        }
        len/=4;
        bool flag=true;
        for(int i=0;i<len;i++){
            if(i%4==0){
                flag=true;
            }
            if(flag&&s1[i]!='0'){
                flag=false;
                v[i/4].push_back(s1[i]);
            }
            else if(flag==false){
                v[i/4].push_back(s1[i]);
            }
        }
        len/=4;
        for(int i=0;i<len;i++){
            if(v[i].empty()){
                v[i].push_back('0');
            }
        }
        /*for(int i=0;i<len;i++){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j];
            }
            cout<<" ";
        }
        cout<<endl;*/
        int cnt=0;
        int ans=0;
        int pos=0;
        for(int i=len-1;i>=0;i--){
            if(v[i].size()==1&&v[i][0]=='0'){
                cnt++;
            }
            else if((v[i].size()!=1)||(v[i].size()==1&&v[i][0]!='0')){
                //cout<<ans<<" "<<cnt<<" "<<i<<endl;
                int temp;
                temp=2*cnt-1;
                if(i+1+cnt==len){
                    temp++;
                }
                else{
                    temp+=2;
                }
                if(cnt>=2&&ans<temp){
                    ans=temp;
                    pos=i+1;
                }
                cnt=0;
            }
        }
        if(v[0].size()==1&&v[0][0]=='0'){
            int temp=2*cnt;
            if(cnt>=2&&ans<temp){
                ans=temp;
                pos=0;
            }
        }
        key++;
        printf("Case #%d: ",key);
        ans/=2;
        for(int i=0;i<pos;i++){
            if(i) printf(":");
            int l=v[i].size();
            for(int j=0;j<l;j++){
                printf("%c",v[i][j]);
            }
        }
        if(ans!=0){
           printf("::");
        }
        for(int i=pos+ans;i<len;i++){
            if(i!=pos+ans) printf(":");
            int l=v[i].size();
            for(int j=0;j<l;j++){
                printf("%c",v[i][j]);
            }
        }
        printf("\n");
        for(int i=0;i<len;i++){
            v[i].clear();
        }
    }
    return 0;
}
