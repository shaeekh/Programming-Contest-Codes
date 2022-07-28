#include<bits/stdc++.h>
using namespace std;
#define maxi 749

struct data
{
    int ver;
    int we;
    data(int a,int b)
    {
        ver=a;
        we=b;
    }
    bool operator<(const data &comp)const
    {
        return comp.we<we;
    }
};
vector<data>g[maxi];
int dis[maxi];
void dij(int n,int s)
{
    for (int i=0;i<n;i++)
        dis[i]=INT_MAX;
    dis[s]=0;
    priority_queue<data> pq;
    pq.push(data(s,0));
    while(!pq.empty())
    {
        int u=pq.top().ver;
        pq.pop();
        for (int i=0;i<g[u].size();i++)
        {
            int d=g[u][i].ver;
            int we=g[u][i].we;
            if(dis[u]+we<dis[d])
            {
                dis[d]=dis[u]+we;
                pq.push(data(d,we));
            }
        }
    }
    for(int i = 0; i < n; i++) {
    if(dis[i]==INT_MAX)
        printf("Impossible\n");
    else
        printf("%d\n",dis[i]);
}
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int v,e;
    scanf("%d %d",&v,&e);
    for (int i=0;i<e;i++)
    {
        int a,b,w;
        scanf("%d %d %d",&a,&b,&e);
        g[a].push_back(data(b,w));
        g[b].push_back(data(a,w));


    }
     int s;
     cin>>s;

    dij( v,s);
}
}


