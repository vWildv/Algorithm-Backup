#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,p,l,r;
	double ans,pro[100010];
	while(~scanf("%d%d",&n,&p))
	{
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&l,&r);
			pro[i]=1-(double)(r/p-(l-1)/p)/(r-l+1); //选择的数不是 p的倍数的概率
		}
		ans=0;
		for(i=0;i<n;i++) ans+=1-pro[i]*pro[(i+1)%n]; //两人选择的数至少有一个是 p的倍数的概率
		printf("%lf\n",ans*2000);
	}
	return 0;
}
