#include<stdio.h>
int f[50005];

int getf(int n)
{
    if(n==f[n])
        return n;
    else return getf(f[n]);
}

void merge(int a,int b)
{
    int p=getf(a);
    int q=getf(b);
    if(p==0 || q==0)
    {
        f[p]=0;
        f[q]=0;
    }
    else
    {
        f[q]=p;
    }

}

int main()
{
    int m,n;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        int num=0;
        for(int i=0;i<m;i++)
        {
            f[i]=i;
        }
        int a,b;
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&a,&b);
            merge(a,b);
        }
        for(int i=0;i<m;i++)
        {
            if(getf(i)==0)
                num++;
        }
        printf("%d\n",num);
    }
    return 0;
}
