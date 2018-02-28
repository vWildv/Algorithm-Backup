#include <stdio.h>
#include <string.h>

int main ()
{
	char str[105];
	int i = 0, ans = 0;
	while(scanf("%s", &str) != EOF)
	{
		int len=strlen(str);//bkpstor
		if(len >= 7)
		{
			for(i = 0; i <= len-7; i++)
			{
				//printf("i------>str[%d]------->%c\n", i, i+6, str[i+6]);
				if(str[i+0]=='b' && str[i+1]=='k'&&str[i+2]=='p'&&str[i+3]=='s'&&str[i+4]=='t'&&str[i+5]=='o'&&str[i+6]=='r')
				{
					ans = 1;
					break;
				}
			}
		}
		if(ans)	
			printf("Warning\n");
		else 
			printf("Safe\n");
		ans = 0;
	}
	return 0;
}
