#include<stdio.h>
#include<string.h>

char a[9][9];
int book[9];
int n, k;
int c, m;

void DFS_1(int i)
{
    if(k == m)
    {
        c++;
        return ;
    }
    if(i >= n)

        return ;
    for(int j = 0; j < n; j++)
        if(book[j]==0 && a[i][j]=='#')
        {
            book[j] = 1;
            m++;
            DFS_1(i+1);
            book[j] = 0;
            m--;
        }
    DFS_1(i+1);
}

int main()
{
    int i,j;
    while(scanf("%d%d", &n, &k) && n!=-1 && k!=-1)
    {

        c = 0;
        m = 0;
        memset(a, 0, sizeof(a));
        for(i = 0; i < n; i++)
            scanf("%s", &a[i]);
        memset(book, 0, sizeof(book));
        DFS_1(m);
        printf("%d\n", c);
    }
    return 0;
}