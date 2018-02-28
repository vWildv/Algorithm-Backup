#include<stdio.h>
char a[2001][2001];
int main()
{
    int hang,lie,people;
    while(~scanf("%d%d%d",&hang,&lie,&people))
    {
        getchar();
        int i,j;
        int  sum=0;
        for(i=1; i<=hang; i++)
        {
            int last=0;
            int step=2;
            for(j=1; j<=lie; j++)
            {
                scanf("%c",&a[i][j]);
                if(a[i][j]=='*'&&step==2)
                {
                    int last2=last;
                    last=j;
                    if(last-last2-people>0)
                        sum+=last-last2-people;
                }
            }
            if(a[i][lie]!='*')
            {
                if(lie-last-people+1>0)
                    sum+=lie-last-people+1;
            }
            getchar();
        }
        if(people==1)
            printf("%d\n",sum);
        else
        {
            for(i=1; i<=lie; i++)
            {
                int last=0;
                int step=2;
                for(j=1; j<=hang; j++)
                {
                    if(a[j][i]=='*'&&step==2)
                    {
                        int last2=last;
                        last=j;
                        if(last-last2-people>0)
                            sum+=last-last2-people;
                    }
                }
                if(a[hang][i]!='*')
                {
                    if(hang-last-people+1>0)
                        sum+=hang-last-people+1;
                }
            }

        printf("%d\n",sum);
        }


    }
    return 0;
}

