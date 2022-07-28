#include<bits/stdc++.h>
using namespace std;
#define N 35
vector<int> v[N];
int dis[N];
bool visited[N];
//vector<int>visited[]




int bfs(int s,int l)
{
    int cap=0;
memset(dis,0,sizeof dis);
memset(visited,0,sizeof visited);
queue<int>q;
q.push(s);
visited[s]=true;
while(!q.empty())
{

int u=q.front();
q.pop();
for  (int i=0;i<v[u].size();i++)
{
    int qw=v[u][i];
    if(visited[qw]==false)
    {
        printf("false\n");
        visited[qw]=true;
        dis[qw]=dis[u]+1;
        q.push(qw);
     //   cout<<dis[qw]<<endl;
        if(dis[qw]>l)
            cap++;
            //cout<<cap<<endl;


    }

}


return cap;
}
}


int main()
{
    while(1)
    {


    int n;
    cin>>n;
    if(n==0)
        break;
    int a,b;
    for (int i=0;i<n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);


    }
    int st,l;
    int cou=1;
    while(cin>>st>>l)
    {
        if(st==0 && l==0)
            break;
       int d= bfs(st,l);
        printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cou,d,st,l);
        cou++;
    }

}
}

