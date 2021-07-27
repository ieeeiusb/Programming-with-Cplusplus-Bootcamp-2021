#include <bits/stdc++.h>
using namespace std;
#define WHITE 1
#define BLUE 2
#define BLACK 3

int adj[100][100];
int color[100];
int node;
int edge;

void dfsVisit(int node)
{
    color[node] = BLUE;
    /// kichu kaj
    for(int i = 0; i < node; i++) {
        if(adj[node][i] == 1) {
            if(color[i] == WHITE) {
                dfsVisit(i);
            }
        }
    }
    color[node] = BLACK;
}

void dfs()
{
    for(int i = 0; i < node; i++)
        color[i] = WHITE;
    for(int i = 0; i < node; i++) {
        if(color[i] == WHITE)
            dfsVisit(i);
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
    dfs();
    return 0;
}
