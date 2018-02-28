#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;

int const Maxsize = 200000;
int val[Maxsize + 1];

struct node
{
    int max;
    int left;
    int right;
} tree[Maxsize*2];

int Max(int x,int y)
{
    return x>y?x:y;
}

int create(int root,int left,int right)
{
    int a,b;
    tree[root].left = left;
    tree[root].right = right;
    if(left == right)
        return tree[root].max = val[left];
    int middle = (right+left)/2;
    a = create(2*root, left, middle);
    b = create(2*root+1, middle+1, right);
    return tree[root].max = Max(a,b);
}

int update(int root, int pos,int val)
{
    int a,b;
    if(pos < tree[root].left || tree[root].right < pos)
        return tree[root].max;
    if(tree[root].left == pos && tree[root].right == pos)
        return tree[root].max = val;
    a = update(2*root, pos, val);
    b = update(2*root+1, pos, val);
    return tree[root].max = Max(a,b);
}

int RMQ(int root, int left, int right)
{
    if(tree[root].left>right || tree[root].right<left)
        return 0;
    if(left <=tree[root].left && tree[root].right <= right)\
        return tree[root].max;
    int a,b;
    a = RMQ(2*root, left, right);
    b = RMQ(2*root+1,left, right);
    return Max(a,b);
}

int main()
{
    int n,m;
    int right,left;
    int cnt = 1;
    while(~scanf("%d",&n))
    {
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&val[i]);
        }
        create(1,1,n);
        printf("Case %d:\n",cnt++);
        scanf("%d",&m);
        for(int i = 0; i < m; i++)
        {
            scanf("%d%d",&left,&right);
            printf("%d\n",RMQ(1,left,right));
        }
    }
}
