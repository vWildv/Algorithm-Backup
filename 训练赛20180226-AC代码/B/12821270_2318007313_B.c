#include<stdio.h>
int m,d,a[200001],t,Max[200001],l=0,p;
char c[5];

int main()
{
	scanf("%d%d", &m, &d);
	while (m--)
	{
		scanf("%s%d",c,&p);
		if(c[0]=='A')
		{
			a[++t]=(l+p)%d;
			for(int i=t;i;i--)
            {
                if(Max[i]<a[t])
                {
                    Max[i]=a[t];

                }
				else
                {
                    break;
                }
            }

		}
		else
        {
            printf("%d\n",l=Max[t-p+1]);
        }
	}
	return 0;
}
