#include<bits/stdc++.h>
using namespace std;
#define white 0
#define gray 1
#define black 2
#define sizeit 100
int adj[sizeit][sizeit];
int color[sizeit];
int distanceit[sizeit];
int parent[sizeit];
int ver,edge;
void BFS(int st);
int main()
{
    cin>>ver>>edge;
    for (int i=0;i<edge;i++)
    {
        int n1,n2;
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    printf("starting node\n");
    int st;
    cin>>st;

    BFS(st);
}
void BFS(int st)
{
    for (int i=0;i<ver;i++)
    {
        color[i]=white;
    }
    distanceit[st] = 0;
    parent[st] = -1;

  //  color[starting]=gray;
    queue<int> q;
    q.push(st);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        color[x]=gray;
        for (int i=0;i<ver;i++)
        {
            if(adj[x][i]==1)
            {
                if(color[i]==white)
                {
                    color[i]=gray;
                     printf("%d ",i);
                     parent[i]=x;
                     distanceit[i]=distanceit[x]+1;
                     q.push(i);

                }
            }
        }
        color[x]=black;
    }
}

