    #include<stdio.h>  
    #include<string.h>  
    #include<algorithm>  
    #include<queue>  
    using namespace std;  
    char map[250][250];  
    int w,h,z_x,z_y,w_x,w_y;  
    int dis[4][2]={{1,0},{-1,0},{0,1},{0,-1}};  
    struct st  
    {  
        int x,y,step;  
        bool friend operator<(st a,st b)  
        {  
            return a.step>b.step;  
        }  
    }z,temp;  
    int Well(st a)  
    {  
        if(map[a.x][a.y]!='#'&&a.x>=0&&a.x<w&&a.y>=0&&a.y<h)  
            return 1;  
        else  
            return 0;  
    }  
    int bfs()  
    {  
        z.x=z_x;z.y=z_y;z.step=0;  
        priority_queue<st>q;  
        int i,n;  
        q.push(z);  
        while(!q.empty())  
        {  
            z=q.top();  
            q.pop();  
            if(z.x==w_x&&z.y==w_y)  
                return z.step;  
            for(i=0;i<4;i++)  
            {  
                temp.x=z.x+dis[i][0];  
                temp.y=z.y+dis[i][1];  
                if(Well(temp))  
                {  
                    if(map[temp.x][temp.y]=='W'||map[temp.x][temp.y]=='.')  
                        temp.step=z.step+1;  
                    else  
                    {  
                        n=map[temp.x][temp.y]-'0';  
                        temp.step=z.step+n+1;  
                    }  
                    map[temp.x][temp.y]='#';  
                    q.push(temp);  
                 }   
            }  
        }  
        return -1;  
    }  
    int main()  
    {  
        int t;  
        scanf("%d",&t);  
        while(t--)  
        {  
            scanf("%d%d",&w,&h);  
            int i,j;  
            for(i=0;i<w;i++)  
            {  
                scanf("%s",map[i]);  
                for(j=0;j<h;j++)  
                {  
                    if(map[i][j]=='Z')  
                    {  
                        z_x=i;z_y=j;  
                    }  
                    if(map[i][j]=='W')  
                    {  
                        w_x=i;w_y=j;  
                    }  
                }  
            }  
            int sum=bfs();  
            if(sum==-1)  
                printf("IMPOSSIBLE\n");  
            else  
            {  
                printf("%d\n",sum);  
            }  
        }  
        return 0;  
    }  