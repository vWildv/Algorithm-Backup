#include <bits/stdc++.h>
using namespace std;

map<string,int> a;
map<string,int> b;
string c[10005];

int main(){
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        a[tmp]=1;
    }
    scanf("%d",&m);
    int sum=0;
    int maxn=-1;
    for(int i=0;i<m;i++){
        int num;
        string s;
        cin>>s>>num;
        b[s]=num;
        sum+=num;
        //maxn=max(num,maxn);
    }
    int p=sum/m;
    int cnt=0;
    map<string,int>::iterator it;
    for(it=b.begin();it!=b.end();it++){
        if(it->second>p&&!a[it->first]) cout<<it->first<<endl,cnt++;;
    }
    if(cnt==0) printf("Bing Mei You\n");
}