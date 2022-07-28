#include<bits/stdc++.h>
using namespace std;
void bfs(int n,int m);
int cost[10005];
bool visited[10004];
int main()
{
    int n,m;
    cin>>n>>m;
    bfs(n, m);
}
void bfs(int n,int m)
{
    queue<int> q;
    q.push(n);
    visited[n]=true;
    cost[n]=0;
    //int c=0;
    while(!q.empty())
    {


        int v=q.front();
    //    if(v==m)
         //   printf("paisi\n");
        q.pop();
        if(v>=1)
        {
            if(!visited[v*2] && 2*v<=10000)
            {
                visited[v*2]=true;
                q.push(v*2);
                cost[v*2]=cost[v]+1;
            }

                if(!visited[v-1])
            {
                visited[v-1]=true;
                q.push(v-1);
                cost[v-1]=cost[v]+1;
            }
        }
        if(v==m)
        {
            cout<<cost[m]<<endl;
            return;
        }


    }
}
