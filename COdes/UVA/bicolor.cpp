#include<bits/stdc++.h>
using namespace std;
#define size 80

int adj[size][size];
int color[size];
//int dis[size];
//int par[size];
int vertex,edge;
bool BFS(int starting_node);


int main()
{
    for (;  ;)
    {



    //int vertex,edge;
    //printf("Enter the number of vertex and edges\n");
    cin>>vertex;
    if(vertex==0)
        {//return 0;
        break;
        }
        cin>>edge;
   // printf("Enter the connecting nodes\n");

        for (int i=0;i<edge;i++)
    {
        int connecting_node;
        int connected_node;
        cin>>connecting_node>>connected_node;
        adj[connecting_node][connected_node]=1;
        adj[connected_node][connecting_node]=1;
    }

    //printf("The current condition of nodes presented in matrix is\n\n");
    //for (int i=0;i<vertex;i++)
    //{
      //  for (int j=0;j<vertex;j++)
       // {
         //   cout<<adj[i][j]<<"  ";
        //}
        //cout<<endl;
    //}
    //printf("Enter the starting node\n");
    //int st=0;
    //cin>>st;
    bool fdg=BFS(0);
    if(fdg==true)
        printf("BICOLORABLE\n");
    else
        printf("NOT BICOLORABLE\n");
        memset(adj, 0, sizeof(adj));


}
}
bool BFS(int starting_node)
{
    for (int i=0;i<vertex;i++)
    {
        color[i]=-1;
    }
    //dis[starting_node]=0;
   // par[starting_node]=-1;
    queue<int> q;
    //int flag=1;
    // color[starting_node]=0;
    q.push(starting_node);
    //printf("Traversed nodes are\n");
//check line-color[0]=gray;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        //color[x]=0;
  //      printf("The adjacent of %d are\n",x);
       // cout<<x;
        //cout<<"  ";

        for (int i=0;i<vertex;i++)
        {
            if(adj[x][i]==1)
            {
                if(color[i]==-1)
                {
                    //printf("%d ",i);
                //    par[i]=x;
                    //color[i]=gray;
                    color[i]=(color[x]+1)%2;
                  //  dis[i]=dis[x]+1;
                    q.push(i);
                }
                else if(color [i]==color[x])
                {
             //       printf("%d er color %d\n%d er color %d\n",i ,color[i],x,color[x]);
                    return false;

                }
            }

        }


     //color[x]=black;

    }
    return true;

    }
