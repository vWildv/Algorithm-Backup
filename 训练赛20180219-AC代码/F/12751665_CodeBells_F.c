#include<stdio.h>
int main()
{
    int N,P,Q;
    while(~scanf("%d%d%d",&N,&P,&Q))
    {
        int cnt=0;
        if(N%2==0) {
            cnt+=(N/2);
            cnt+=(P+Q)/4;
            if((P+Q)%4!=0) cnt++;
        }
        if(N%2!=0)
        {
            cnt+=(N/2);
            if(P>0&&Q>0)
            {
                cnt++;
                P--;
                Q--;
            cnt+=(P+Q)/4;
            if((P+Q)%4!=0) cnt++;
            }
            else if(P==0&&Q==0)
            {
                cnt++;
            }
            else if(P==0&&Q!=0)
            {
                cnt++;
                Q--;
                cnt+=(Q)/4;
            if((Q)%4!=0) cnt++;
            }
            else if(Q==0&&P!=0)
            {
                cnt++;
                P--;
                cnt+=(P)/4;
            if((P)%4!=0) cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}