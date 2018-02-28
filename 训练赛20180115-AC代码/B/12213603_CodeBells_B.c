#include <stdio.h>
int UFS_NUM;
typedef struct node{
    int data;
    int rank;
    int parent;
}UFSTree;
void MAKE_SET(UFSTree t[])
{
    int i;
    for(i=0;i<UFS_NUM;i++){
        t[i].data = i;
        t[i].rank = 0;
        t[i].parent = i;
    }
}
int FIND_SET(UFSTree t[],int x)
{
    if(t[x].parent == x)
        return x;
    else
        return FIND_SET(t,t[x].parent);
}
void UNION(UFSTree t[],int x,int y)
{
    x = FIND_SET(t,x);
    y = FIND_SET(t,y);
    if(t[x].rank > t[y].rank)
        t[y].parent = x;
    else{
        t[x].parent = y;
        if(t[x].rank==t[y].rank)
            t[y].rank++;
    }
}
int main()
{
    int i,n,m,x,y;
    while(scanf("%d%d",&n,&m)!=EOF){
        UFSTree t[50005];
        UFS_NUM = n;
        MAKE_SET(t);
        for(i=1;i<=m;i++){
            scanf("%d%d",&x,&y);
            UNION(t,x,y);
        }
        int f0 = FIND_SET(t,0);
        int sum=0;
        for(i=0;i<n;i++)
            if(FIND_SET(t,i)==f0)
                sum++;
        printf("%d\n",sum);
    }
    return 0;
}
