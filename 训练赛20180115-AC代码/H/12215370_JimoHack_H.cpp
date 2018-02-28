#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <string>
#include <vector>
#include <map>
#define True 9999
using namespace std;
typedef long long int  int64;
int n;
class Tree
{
public:
    int data,nextL,nextR;
};
Tree tree[400000];
int init(int root=1,int l=1,int r=n)
{
    int mid=(l+r)>>1;
    tree[root].nextL=l;
    tree[root].nextR=r;
    if(l==r)
    {
        scanf("%d",&tree[root].data);
        return (tree[root].data);
    }
    else
    {
        int a=init(2*root,l,mid);
        int b=init(2*root+1,mid+1,r);
        return (tree[root].data=max(a,b));
    }
}
int find(int root,int l,int r)
{
        if(tree[root].nextL>r || tree[root].nextR<l)
            return 0;
        if(l <=tree[root].nextL && tree[root].nextR <= r)
            return tree[root].data;
        int a,b;
        a = find(2*root, l, r);
        b = find(2*root+1,l, r);
        return max(a,b);
}
int main()
{
    int cnt=1;
    while(~scanf("%d",&n))
    {
        init(1,1,n);
        printf("Case %d:\n",cnt++);
        int m;
        scanf("%d",&m);
        for(int i = 0; i < m; i++)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            printf("%d\n",find(1,l,r));
        }
    }
}
