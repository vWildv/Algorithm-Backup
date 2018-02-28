#include<cstdio>
#include<cstring>
using namespace std;

int s[1005];

int Union(int rt1,int rt2)
{
    if(s[rt1]<s[rt2]){
        s[rt1]+=s[rt2];
        s[rt2]=rt1;
    }
    else{
        s[rt2]+=s[rt1];
        s[rt1]=rt2;
    }
}

int Find(int x)
{
    if(s[x]<0)
        return x;
    else
        return s[x]=Find(s[x]);
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int N,M;
        memset(s,-1,sizeof(s));
        scanf("%d%d",&N,&M);
        int A,B;
        while(M--){
            scanf("%d%d",&A,&B);
            int r1=Find(A);
            int r2=Find(B);
            if(r1!=r2)
                Union(r1,r2);
        }
        int cnt=0;
        for(int i=1;i<=N;i++)
            if(s[i]<0) cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}