#include <bits/stdc++.h>

using namespace std;
vector <int> adj[100];
string color[100] = "";
void bfs(int s) {
    queue <int> q;
    for(int i = 0; i < 100; i++)
        color[i] += "White";

    q.push(s);
    color[s] = "Grey";

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        int p = 1;

        cout << p++ << " : " << u << endl;
        for(int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i];
            //cout << v << endl;
            //cout << color[v] << endl;
            if(color[v] == "White") {
                color[v] = "Grey";
                q.push(v);
            }
        }
        color[u] = "Black";
    }

}



int main()
{

    int n = 8;
    int a, b;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    /*for(int i = 1; i <= n; i++) {
        cout <<  " : " << adj[i].size() << endl;
        cout << endl;
    }*/
    bfs(1);


    return 0;
}
