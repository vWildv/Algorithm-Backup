#include<stdio.h>
#include<string.h>
int a;
int b[100000];
int main()
{
	int n,cnt;
	while(scanf("%d",&n)!=EOF)
	{
		memset(b,0,sizeof(b));
		cnt = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a);
			int j;
			for(j=0;j<=cnt;j++)
			{
				if(b[j]>=a)
				{
					b[j]=a;
					break;
				}
			}
			if(j>cnt)
			{
				b[++cnt] = a;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}