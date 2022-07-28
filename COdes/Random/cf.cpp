#include<bits/stdc++.h>
using namespace std;
 int grid[5][5];
 int dist[5][5];
 bool visit[10][10];

 int fx[4]={1,-1,0,0};
 int fy[4]={0,0,1,-1};
// int pee=5;
 //#define valid(z,x) ((z>=0 && z<5) && (x>=0 && x<5))
 int bfs(int p,int q);
int main()
{
    //memset(dist,0,sizeof(dist));
    //memset(visit,0,sizeof(visit));
   int p,q;
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]==1)
            {p=i;
            q=j;
            }

        }
    }
    int get=bfs(p,q);
    //cout<<p<<" "<<q<<endl;
    printf("%d\n",get);
}
int  bfs(int p, int q)
{
    visit[p][q]=true;
    queue <int> qx;
    queue<int> qy;
    qx.push(p);
    qy.push(q);
    dist[p][q]=0;
    //int co=0;
   // printf("ddd");
    while(!qx.empty())
    {
        int vx=qx.front();
        int vy=qy.front();
        for (int i=0;i<4;i++)
        {
            int ux=vx+fx[i];
            int uy=vy+fy[i];
            if(ux>=0 && uy>=0 && ux<5 && uy<5 && (!visit[ux][uy]))
            {


                    //co++;
                    visit[ux][uy]=true;
                    qx.push(ux);
                    qy.push(uy);
                    dist[ux][uy]=dist[vx][vy]+1;



            }

        }
        qx.pop();
        qy.pop();
    }
  //  printf("last");

return dist[2][2];
}
