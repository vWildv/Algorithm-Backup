#include<stdio.h>
int main()
{
    int N,P,Q,ans;
    scanf("%d%d%d",&N,&P,&Q);
    if (N % 2 == 0)
        ans=(2*N+P+Q+3)/4;
    else
    {
        int d=P+Q;
        if(P==0 ^ Q==0)//0^0=0  1^1=0  1^0=1  0^1=1
        {
            d--;
            ans=(2*N+1+3)/4;
            ans+=(d+3)/4;
        }
        else
            ans=(2*N+P+Q+3)/4;
    }
    printf("%d\n",ans);
    return 0;
}