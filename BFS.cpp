#include <bits/stdc++.h>
using namespace std;
#define WHITE 1
#define BLUE 2
#define BLACK 3

int node;
int edge;

int adj[100][100];
int color[100];
int parent[100];
int dist[100];

void bfs(int startingNode)
{
    for(int i = 0; i < node; i++) {
        color[i] = WHITE;
        dist[i] = INT_MIN;
        parent[i] = -1;
    }
    dist[startingNode] = 0;
    parent[startingNode] = -1;

    queue <int> que;
    que.push(startingNode);
    while(!que.empty())
    {
        int x;
        x = que.front();
        que.pop();
        color[x] = BLUE;
        /// cout << x << endl;
        /// kichu kaj
        for(int i = 0; i < node; i++) {
            if(adj[x][i] == 1) {
                if(color[i] == WHITE) {
                    /// x er neighbor i
                    /// x no. node ta hocche i no. node er parent
                    dist[i] = dist[x] + 1;
                    parent[i] = x;
                    que.push(i);
                }
            }
        }
        color[x] = BLACK;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);

    cin >> node;

    cin >> edge;

    int n1, n2;

    for(int i = 0; i < edge; i++) {
        cin >> n1 >> n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }
    bfs(0);
    cout << parent[5] << endl;
    cout << dist[6] << endl;
    return 0;
}
