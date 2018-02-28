#include<bits/stdc++.h>
using namespace std;

struct node
{
    char name[100];
    int region;
    int score;
} person[100005];

int cmp(node x,node y)
{
    if(x.region==y.region)
    {
        return x.score>y.score;
    }
    else
    {
        return x.region<y.region;
    }
}

int m,n;

int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        for(int i=0; i<n; i++)
        {
            scanf("%s%d%d",person[i].name,&person[i].region,&person[i].score);
        }
        sort(person,person+n,cmp);
        if(person[1].region==person[2].region)
        {
            if(person[1].score==person[2].score)
            {
                printf("?\n");
            }
            else
            {
                printf("%s %s\n",person[0].name,person[1].name);
            }
        }
        else
        {
            printf("%s %s\n",person[0].name,person[1].name);
        }
        for(int i=1; i<=n; i++)
        {
            if(person[i].region==person[i-1].region)
            {
                continue;
            }
            else
            {
                if(person[i+1].region==person[i+2].region&&(i+2)<=n)
                {
                    if(person[i+1].score==person[i+2].score)
                    {
                        printf("?\n");
                    }
                    else
                    {
                        printf("%s %s\n",person[i].name,person[i+1].name);
                    }
                }
                else
                {
                    printf("%s %s\n",person[i].name,person[i+1].name);
                }
            }
        }
    }
}
