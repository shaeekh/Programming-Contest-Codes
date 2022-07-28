#include<bits/stdc++.h>
using namespace std;
#define white 0
#define gray 1
#define black 2
#define sizeit 20009
vector <int> adj[sizeit];
int color[sizeit];
int edge;
//int distanceit[sizeit];
//int parent[sizeit];


int BFS(int st);
void adj_clear()
{
    for(int i=0; i<sizeit; i++)
    {
        adj[i].clear();
    }
}
int main()
{

    int test;
    cin>>test;
    for (int imp=1;imp<=test;imp++)
    {
//cin>>ver;

    adj_clear();

  memset(color, 0, sizeof color);
    cin>>edge;
    //printf("Ki\n");
 //memset(adj, 0, sizeof (adj));
    //for (int i=0;i<edge;i++)
    //{
      //  int n1,n2;
        //cin>>n1>>n2;
        //adj[n1][n2]=1;
        //adj[n2][n1]=1;
    //}
//    printf("starting node\n");
for (int pee=0;pee<edge;pee++)
{
    //printf("s");
    int n1,n2;
    cin>>n1>>n2;
    adj[n1].push_back(n2);
    adj[n2].push_back(n1);
}
//    int st=0;

    long long  int get=0;
    //cin>>st;
    for(int po=0;po<sizeit;po++)
    {
        if(!adj[po].empty() && color[po] ==white)
        {int de=BFS(po);
        //cout<<"de is "<< de<<endl;
        get=get+de;
    }
    }
    printf("Case %d: %lld\n", imp, get);


}
return 0;
}

int  BFS(int st)
{
    long long int sum=0;
//    for (int i=0;adj.size();i++)
  //  {
    //    color[i]=white;
    //}
    //distanceit[st] = 0;
    //parent[st] = -1;
    int graycount=0,other=0;

  //  color[starting]=gray;
    queue<int> q;
    q.push(st);
    color[st]=gray;
        graycount++;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();

        for (int i=0;i<adj[x].size();i++)
        {
            int temp=adj[x][i];

                if(color[temp]==white)
                {
                    if(color[x]=gray)
                    {

                    color[temp]=black;
                    other++;
                    }
                    else if(color[x]==black)
                    {
                        color[temp]=gray;
                        graycount++;
                    }
                     //printf("%d ",i);
                     //parent[i]=x;
                     //distanceit[i]=distanceit[x]+1;
                     q.push(temp);
                    }

        }
        //color[x]=black;
    }
    //cout<<graycount<<endl;
   // cout<<other<<endl;
    sum=(max(graycount,other));
    //cout<<"sum is "<<sum<<endl;
    return sum;
}
