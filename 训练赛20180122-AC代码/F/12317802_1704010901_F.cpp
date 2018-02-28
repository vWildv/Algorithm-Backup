#include<stdio.h>
#include<string.h>
int main()
{
    int f[10001],a[10001],longc,Cout;
    int t;
    while(~scanf("%d",&t))
    {
        for(int i=1;i<=t;i++)
            scanf("%d",&a[i]);
        memset(f,0,sizeof(f));
        Cout=0;
        for(int i=1;i<=t;i++)
        {
            f[i]=1;
            for(int j=1;j<=i;j++)
                if(a[i]>a[j]&&f[i]<f[j]+1)
                  f[i]=f[j]+1;
            if(Cout<f[i])
                Cout=f[i];
        }
        printf("%d\n",Cout);
    }
}
