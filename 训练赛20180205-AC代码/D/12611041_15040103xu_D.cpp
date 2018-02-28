#include<stdio.h>
#include<string.h>
#define maxn 200010
#define mod 10007
int next[maxn],dp[maxn];
char str[maxn];

void getnext(int len)
{//KMP
    int i=0,j=-1;
    next[0]=-1;
    while(i<len)
    {
        if(j==-1 || str[i]==str[j])
        {
            i++;
            j++;
            next[i]=j;
        }
        else
            j=next[j];
    }
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",str);
        getnext(n);
        memset(dp,0,sizeof(dp));
        int sum=0;
        for(int i=1; i<=n; i++)
        {
            dp[i]=(dp[next[i]]+1);
            sum=(sum+dp[i])%mod;
        }
        printf("%d\n",sum);
    }
    return 0;
}
