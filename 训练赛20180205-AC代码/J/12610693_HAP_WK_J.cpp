#include<stdio.h>
#include<string.h>
int degree[1000];
int side[1000];
int map[510][501],list,line;
void TO()
{
    int i,j=0,k=100000,t;
    for(i=1;i<=line;i++)
    {
        for(t=1;t<=line;t++)
        if(degree[t]==0)//找没有前驱的点
        {
            k=t;
            break;
        }
        else k=100000;
        if(k==100000)//判断是否成环
        {
            printf("NO\n");
            return ;
        }
        side[j++]=k;//记录该点
        degree[k]=-1;//把该点去掉
        for(int v=1;v<=line;v++)
        if(map[k][v]) degree[v]--;//前驱与后面的连线消失
    }
  //  if(j==line)
   printf("YES\n");
    //else printf("NO\n");
}
int main()
{
    while(scanf("%d%d",&line,&list)!=EOF)
    {
       if(line==0&&list==0)
       break;
        int j,a,b;
        memset(map,0,sizeof(map));
        memset(degree,0,sizeof(degree));
        for(j=0;j<list;j++)
        {
            scanf("%d%d",&a,&b);
            a=a+1;b=b+1;
            if(map[a][b]==0)//防止出现重复如1,2；1,2这样的情况
            {
                map[a][b]=1;// 与前一步的关系；
                degree[b]++;//前驱的数量
            }
        }
        TO();
    }
    return 0;
}
