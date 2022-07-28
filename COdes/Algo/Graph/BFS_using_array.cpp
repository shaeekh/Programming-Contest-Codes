#include<bits/stdc++.h>
using namespace std;
#define white 1
#define gray 2
#define black 3
#define size 80
int adj[size][size];
int color[size];
int dis[size];
int par[size];
int vertex,edge;
void BFS(int starting_node);


int main()
{
    //int vertex,edge;
    printf("Enter the number of vertex and edges\n");
    cin>>vertex>>edge;
    printf("Enter the connecting nodes\n");
        for (int i=0;i<edge;i++)
    {
        int connecting_node;
        int connected_node;
        cin>>connecting_node>>connected_node;
        adj[connecting_node][connected_node]=1;
        adj[connected_node][connecting_node]=1;
    }
    printf("The current condition of nodes presented in matrix is\n\n");
    for (int i=0;i<vertex;i++)
    {
        for (int j=0;j<vertex;j++)
        {
            cout<<adj[i][j]<<"  ";
        }
        cout<<endl;
    }
    printf("Enter the starting node\n");
    int st;
    cin>>st;
    BFS(st);

}
void BFS(int starting_node)
{
    for (int i=0;i<vertex;i++)
    {
        color[i]=white;
    }
    dis[starting_node]=0;
    par[starting_node]=-1;
    queue<int> q;
    q.push(starting_node);
    printf("Traversed nodes from starting nodes  are\n");

    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        color[x]=gray;
  //      printf("The adjacent of %d are\n",x);
      //  cout<<x;
        //cout<<"  ";
        for (int i=0;i<vertex;i++)
        {
            if(adj[x][i]==1)
            {
                if(color[i]==white)
                {
                    printf("%d ",i);
                    par[i]=x;
                    color[i]=gray;
                    dis[i]=dis[x]+1;
                    q.push(i);
                }
            }
        }
        //color[x]=black;
    }
}
