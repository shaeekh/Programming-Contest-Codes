#include <bits/stdc++.h>

using namespace std;

vector <int> adj[101];
string color[101];
int fi[101] = {0};
int vertex[101];
int parent[101];
int ver = 8;
int dist[101] = {0};
int time1;
void dfs_visit(int u) {
    time1++;
    dist[u] = time1;
    color[u] = "Grey";
    cout << u << " ";

    for(int i = 0; i < adj[u].size(); i++) {
        int v = adj[u][i];
        if(color[v] == "White") {
            parent[v] = u;
            dfs_visit(v);
        }
    }
    color[u] = "Black";
    time1++;
    fi[u] = time1;
    cout << endl;
    //cout << u << " : " << dist[u] << endl;
    //cout << u << " : " <<fi[u] << endl;

}


void dfs(int s) {
    for(int i = 0;  i < 100; i++) {
        color[i] = "White";
        parent[i] = -1;
    }
     time1 = 0;
     dfs_visit(s);
    for(int i = 0; i < ver; i++) {
        if(color[vertex[i]] == "White") {
            dfs_visit(vertex[i]);
        }
    }
}





int main()
{
    freopen("in2.txt", "r", stdin);
    int n;
    cin >> n;
    int num = n, n1, n2, visited[101] = {0}, in = 0;
    while(n--) {
        cin >> n1 >> n2;
        if(visited[n1] == 0)    vertex[in++] = n1, visited[n1] = 1;
        if(visited[n2] == 0)    vertex[in++] = n2, visited[n2] = 1;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }
    for(int i = 0; i < in; i++) {
        cout << vertex[i] << " ' s Adjacent : ";
        for(int j = 0; j < adj[vertex[i]].size(); j++) {
            cout << adj[vertex[i]][j] << " ";
        }
        cout << endl;
    }
    int start;
    cin >> start;
    cout << "Starting vertex : " << start << endl;
    cout << "Graph Traversal : ";
    dfs(start);
    cout << endl;




    return 0;
}
