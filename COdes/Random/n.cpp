#include <bits/stdc++.h>

using namespace std;





int  bfs(vector<int> adj[],int src,int rak) {
    int cap=1;
    bool visited[10007];
    memset(visited,false,sizeof visited);//thik ase
  //  memset(dis,0,sizeof dis/sizeof(dis[0]));
    queue <int> q;
    q.push(src);
    visited[src] = true;
    int dis[10007];
   dis[src]=0;


    while(!q.empty()) {
        int u = q.front();
        q.pop();
       //cout << u << " ";

        for(int i = 0; i < adj[u].size(); i++)
            {
           int v = adj[u][i];
           if(visited[v] == false)
           {


                 dis[v]=dis[u]+1;
                 if(dis[v]<=rak)
                    cap++;
                q.push(v);
            visited[v] = true;


           }


        }
    }
    return cap;
}



int main()
{
    int code=1;
     while(1)
    {

   vector <int> adj[10007];

    int n;
    cin>>n;

    if(n==0)
        break;

    int a,b;
     bool taken[10007];
      memset(taken,false,sizeof(taken)/sizeof(taken[0]));
     int cou=0;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        if(taken[a]==false){
                taken[a]=true;
                cou++;
            }
            if(taken[b]==false){
                taken[b]=true;
                cou++;
            }


    }
    int st,l;

    while(cin>>st>>l)
    {
        if(st==0 && l==0)
            break;
       int d= bfs(adj,st,l);
   // cout<<"d "<<d<<endl;
     //cout<<"cou "<<cou<<endl;

        printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",code,(cou-d),st,l);
        code++;
    }

}
return 0;
}
