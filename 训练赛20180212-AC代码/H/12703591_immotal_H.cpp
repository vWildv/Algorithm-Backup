#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;
int day,tim;
bool flag = false;
int cnt;
int num[105];
int main()
{
	while(~scanf("%d%d",&day,&tim))
	{
		memset(num,0,sizeof(num));
		for(int i=1;i<=day;i++)
		{
			scanf("%d",&num[i]);
		}
		flag = false;
		cnt =0;
		for(int i=1;i<=day;i++)
		{
			tim -= (86400-num[i]);
			if(tim <= 0)
			{
				flag = true;
				cnt =i;
				break;
			} 
		}
		if(flag)
		{
			printf("%d\n",cnt);
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
