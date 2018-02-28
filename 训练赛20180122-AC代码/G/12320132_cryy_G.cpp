#include<stdio.h>  
#include<string.h>  

int n,k;  
char map[10][10];  
int vis[10];  
int count;  

void Dfs(int index,int num)  
{  
    if(index>=n&&num!=0)
    {
        return;         
    }
    if(num>n-index)
    {
        return;
    }
    if(num==0)
    {
        count++;  
        return;  
    }  
    int i;  
    for(i=0;i<n;i++)
    {  
        if(map[index][i]=='.')
        {
            continue;  
        }
        if(vis[i])
        {
            continue;  
        }
        vis[i]=1;      //标记列  
        Dfs(index+1,num-1); //表示这一行要放棋子  
        vis[i]=0;  
    }  
    Dfs(index+1,num);    //表示这一行不放棋子  
}  

int main()  
{  
    int i;  
    while(scanf("%d %d",&n,&k)!=EOF)
    {  
        if(n==-1&&k==-1)
        {
            break;  
        }
        count=0;  
        for(i=0;i<n;i++)
        {  
            scanf("%s",map[i]);  
        }  
        memset(vis,0,sizeof(vis));  
        Dfs(0,k);  
        printf("%d\n",count);  
    }  
    return 0;  
}
