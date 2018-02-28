
#include <stdio.h>
int a[50011];
int find(int x)
{
	int r=x;
	while (r!=a[r])
		r=a[r];
	int j=x;
	int t;
	while (a[j]!=r)		//路径压缩（此题需要这个步骤，根据代码自己理解理解吧，不需要死记） 
	{
		t=a[j];
		a[j]=r;
		j=t;
	}
	return r;
}
void join(int x,int y)
{
	int fx,fy;
	fx=find(x);
	fy=find(y);
	if (fx!=fy)
		a[fx]=fy;
}
int main()
{
	int n,m;		//学生数、团体数
	int tn;		//每个团体的人数 
	int t;
	int t1,t2; 
	int ans;
	int root;
	scanf ("%d %d",&n,&m);
	//首先初始化
	for (int i=0;i<n;i++)
	{
		a[i]=i;
	}
	for (int i=1;i<=m;i++)
	{
		scanf ("%d%d",&t1,&t2);
		join(t1,t2);
	}
	root=find(a[0]);		//0的根 
	ans=0;
	for (int i=0;i<n;i++)
	{
		if (find(a[i])==root)
			ans++;
	}
	printf ("%d\n",ans);
	return 0;
}