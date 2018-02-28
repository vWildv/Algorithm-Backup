#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#define eps 1e-6
using namespace std;
int father[1005],n;
int COUNT[1005],num;
struct POINT
{
	double x;
	double y;
};
POINT pt[1005];
void init()
{
	int i;
	num=0;
	memset(COUNT,0,sizeof(COUNT));
	for(i=0;i<1005;i++)
		father[i]=i;
}
int find(int p)
{
	if(p==father[p])
		return p;
	return father[p]=find(father[p]);
}

double dis(POINT a,POINT b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

void Union(int a,int b)
{
	int x,y;
	x = find(a);
	y = find(b);
	if(x != y)
		father[y] = x;
}
int main()
{
	int i,x,y;
	double d;
	char control[2];
	scanf("%d%lf",&n,&d);
	init();
	for(i=1;i<=n;i++)
		scanf("%lf%lf",&pt[i].x,&pt[i].y);
	while(scanf("%s",control)!=EOF)
	{
		if(control[0]=='O')
		{
			scanf("%d",&x);
			for(i=0;i<num;i++)
			{
				if(dis(pt[COUNT[i]],pt[x])<=d+eps)
					Union(COUNT[i],x);
			}
			COUNT[num++]=x;
		}
		if(control[0]=='S')
		{
			scanf("%d%d",&x,&y);
			if(find(x)==find(y))
				printf("SUCCESS\n");
			else
				printf("FAIL\n");
		}
	}
	return 0;
}
