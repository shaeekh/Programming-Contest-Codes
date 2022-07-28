#include<bits/stdc++.h>
using namespace std;


//int dist[23];
int bfs(int st,int l,vector <int> v[]);
int main()
{

    int mo;
    int opo=0;
   // printf("enter 1st\n");
    while(cin>>mo)
    {
        vector<int> v[88];
        //memset(dist,0,sizeof(dist));
        //memset(visit,0,sizeof(visit));
       // memset(v,0,sizeof(v));

        for (int df=1;df<=mo;df++)
        {
            v[mo].push_back(df);
            v[df].push_back(mo);
        }

   // printf("prothom ta input nisi\n");
    for (int i=2;i<=19;i++)
    {
        int m;
        cin>>m;
        for (int j=1;j<=m;j++)
        {
            int sec;
            cin>>sec;
            v[i].push_back(sec);
            v[sec].push_back(i);


        }


    }
   // printf("shobgula input nisi\n");
    int q;
    cin>>q;
    printf("Test Set #%d\n",++opo);

    for (int i=1;i<=q;i++)
    {
        int st,la;
        cin>>st>>la;
       int de= bfs(st,la,v);
       printf("%2d to %d: %d\n",st,la,de);

    }
    }
    return 0;
}
int  bfs(int st,int l,vector<int> v[])
{
    int visit[88]={0};
    int dist[88];
    queue<int> q;
    q.push(st);
    visit[st]=true;
   // dist[st]=1;
    while(!q.empty())
    {
        int u=q.front();
        dist[st]=0;


        for (int i=0;i<v[u].size();i++)
        {
          int temp=v[u][i];
          if(!visit[temp])
          {
              visit[temp]=true;
              //distance er kahini
              dist[temp]=dist[u]+1;


              q.push(temp);
          }
        }
        q.pop();
    }
   // cout<<dist[la]<<endl;
    return dist[l];

}
