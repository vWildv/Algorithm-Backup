#include <iostream>
#include <cstring>
#define INT_MAX 1000000000
using namespace std;
int  matrix[1006][1006];
bool visited[1006];    
int  dist[1006];
int  path[1060]; 
int  source;  
int  vertex_num; 
int  side_num;
void Dijkstra(int source)
{
    memset(visited, 0, sizeof(visited));
    visited[source] = true;
    for (int i = 1; i <= vertex_num; i++)
    {
        dist[i] = matrix[source][i];
    }

    int min_cost;       
    int min_cost_index; 

    for (int i = 1; i <=vertex_num; i++) 
    {
        min_cost = INT_MAX;

        for (int j = 1; j <= vertex_num; j++)
        {
            if (visited[j] == false && dist[j] < min_cost) 
            {
                min_cost = dist[j];
                min_cost_index = j;
            }
        }
        visited[min_cost_index] = true;  

        for (int j = 1; j <= vertex_num; j++)  
        {
            if (visited[j] == false &&
                    matrix[min_cost_index][j] != INT_MAX &&
                    matrix[min_cost_index][j] + min_cost < dist[j])
            {
                dist[j] = matrix[min_cost_index][j] + min_cost;
            }
        }
    }
}
int main()
{
    while(cin>>side_num>>vertex_num)
    {
        for (int i = 1; i <=vertex_num; i++)
            for (int j = 1; j <=vertex_num; j++)
                matrix[i][j] = (i != j) ? INT_MAX : 0;
        int u, v, w;
        for (int i = 1; i <=side_num; i++)
        {
            cin >> u >> v >> w;
            matrix[u][v] = matrix[v][u] = min(w,matrix[v][u]);
        }
        Dijkstra(1);
        cout<<dist[vertex_num]<<endl;
    }
    return 0;
}