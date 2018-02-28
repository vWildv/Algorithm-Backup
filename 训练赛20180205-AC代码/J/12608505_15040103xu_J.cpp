#include<stdio.h>
#include<string.h>
int n, x[1000][1000], ind[1000];
void tpsort()
{
    int i, j, k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            if(ind[j]==0)
                break;
        if(j>n-1)
        {
            printf("NO\n");
            return;
        }
        ind[j] = -1;
        for(k=0; k<n; k++)
            if(x[j][k])
                ind[k]--;
    }
    printf("YES\n");
}
int main()
{
    int m, i, j, a, b;
    while(~scanf("%d %d",&n,&m))
    {
        if(n==0)
            break;
        memset(x, 0, sizeof(x));
        memset(ind, 0, sizeof(ind));
        for(i=0; i<m; i++)
        {
            scanf("%d %d", &a,&b);
            if(!x[a][b])
            {
                x[a][b] = 1;
                ind[b]++;
            }
        }
        tpsort();
    }
    return 0;
}
