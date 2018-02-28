#include<cstdio>
#include<iostream>
using namespace std;
int a[400006];
struct node
{
    int left,right,maxx;
}num[400006];
int MAX(int a,int b)
{
    return a>b?a:b;
}
int buildmax(int left,int right,int cnt)
{
    int mid;
    num[cnt].left=left;
    num[cnt].right=right;
    if(left==right)
        return num[cnt].maxx=a[left];
    mid=(left+right)>>1;
    return num[cnt].maxx=MAX(buildmax(left,mid,cnt*2),buildmax(mid+1,right,cnt*2+1));
}
int querymax(int left,int right,int cnt)
{
    int mid;
    if(left==num[cnt].left&&right==num[cnt].right)
        return num[cnt].maxx;
    mid=(num[cnt].left+num[cnt].right)>>1;
    if(right<=mid)
        return querymax(left,right,cnt*2);
    else if(left>mid)
        return querymax(left,right,cnt*2+1);
    else
        return MAX(querymax(left,mid,cnt*2),querymax(mid+1,right,cnt*2+1));
}

int main()
{
    int t=1,n,m,i,j,L,R;
    while(cin>>n)
    {
        for(i=1;i<=n;++i)
            scanf("%d",&a[i]);
        buildmax(1,n,1);
        scanf("%d",&m);
        printf("Case %d:\n",t++);
        while(m--)
        {
            scanf("%d%d",&L,&R);
			printf("%d\n",querymax(L,R,1));
        }
    }
    return 0;
}
