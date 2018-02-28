#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstring>
#include<queue>
#include<vector>
#include<cstring>
using namespace std;
struct node
{
    string id;
    int area;
    int score;
};
node p[100005];
int cmp(node x,node y)
{
    if(x.area == y.area){
        return x.score > y.score;
    }
    return x.area < y.area;
}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m) != EOF){
        for(int i = 0;i < n;i ++){
            cin >> p[i].id;
            scanf("%d%d",&p[i].area,&p[i].score);
        }
        sort(p,p + n,cmp);
        if(p[1].area == p[2].area){
            if(p[1].score == p[2].score){
                printf("?\n");
            }
            else if(p[1].score != p[2].score){
                cout << p[0].id;
                cout << " ";
                cout << p[1].id << endl;
            }
        }
        else{
            cout << p[0].id;
            cout << " ";
            cout << p[1].id << endl;
        }
        for(int i = 2;i < n - 1;i ++){
            if(p[i - 1].area == p[i].area){
                continue;
            }
            if(p[i + 1].area == p[i + 2].area){
                if(p[i + 1].score == p[i + 2].score){
                    printf("?\n");
                }
                else if(p[i + 1].score != p[i + 2].score){
                    cout << p[i].id;
                    cout << " ";
                    cout << p[i + 1].id << endl;
                }
            }
            else{
                cout << p[i].id;
                cout << " ";
                cout << p[i + 1].id << endl;
            }
        }
    }
    return 0;
}
