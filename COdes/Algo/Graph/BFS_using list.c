#include <bits/stdc++.h>

using namespace std;

vector <int> adj[101];
int visited[101];
int dis[101];
int cou=1;
int  bfs(int src,int rak) {
    int cap=0;
    memset(visited,0,sizeof visited);
    memset(dis,0,sizeof dis);
    queue <int> q;
    q.push(src);
    visited[src] = 1;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
       // cout << u << " ";
        for(int i = 0; i < adj[u].size(); i++)
            {
           int v = adj[u][i];
           if(visited[v] == 0) {
                visited[v] = 1;
                 dis[v]=dis[u]+1;
                 if(dis[v]>rak)
                    cap++;
                q.push(v);


           }

        }
    }
    return cap;
}



int main()
{ while(1)
    {



    int n;
    cin>>n;

    if(n==0)
        break;
    for (int i=0;i<n;i++)
        adj[i].clear();
    int a,b;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);


    }
    int st,l;

    while(cin>>st>>l)
    {
        if(st==0 && l==0)
            break;
       int d= bfs(st,l);
        printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cou,d,st,l);
        cou++;
    }

}
return 0;
}


