#include <bits/stdc++.h>

using namespace std;

vector <int> adj[101];
int visited[101];
void bfs(int src) {
    queue <int> q;
    q.push(src);
    visited[src] = 1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int i = 0; i < adj[u].size(); i++) {
           int v = adj[u][i];
           if(visited[v] == 0) {
                visited[v] = 1;
                q.push(v);

           }

        }
    }
}


int main()
{
    int n, m, x, y;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);    //Assuming the graoh is undirected
        adj[y].push_back(x);
    }
    bfs(1);


    return 0;
}
