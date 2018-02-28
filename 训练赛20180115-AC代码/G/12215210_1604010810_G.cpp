#include<stdio.h>
int x[100],bestx[100];
int cva = 0,cvo = 0,mvo = 0,mva = 0;
int i,c,n;
int volume[100];
int value[100];
void Init()
{
    int i;
    for(i = 0;i<100;i++)
    {
        x[i] = 0;
        bestx[i] = 0;
        volume[i] = 0;
        value[i] = 0;
    }
}
bool place(int t)
{
    if(cvo+volume[t] > c)
        return false;
    return true;
}
void Track(int t)
{
    int m;
    if(t>=n)
    {
        if(cva>mva)
        {
            mva=cva;
            for(m = 0;m<n;m++)
                bestx[m] = x[m];
        }
    }
    else
    {
        for(m = 0;m<=1;m++)
        {
            x[t] = m;
            if(x[t] == 0)
            {
                Track(t+1);
                x[t] = 0;
            }
            else if(place(t) && x[t]==1)
            {

                cva = cva + value[t];
                cvo = cvo + volume[t];
                Track(t+1);
                x[t] = 0;
                cva = cva - value[t];
                cvo = cvo - volume[t];
            }
        }
    }
}
int main()
{
    while(~scanf("%d",&c))
    {
        scanf("%d",&n);
        Init();
        for(i=0;i<n;i++)
            scanf("%d%d",(volume+i),(value+i));
        Track(0);
        printf("%d\n",mva);
        mva=0;
    }
}