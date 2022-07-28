#include<bits/stdc++.h>
using namespace std;
#define maxi 394
int par[maxi];
struct edge
{
    int u,v,w;
    edge(int a_,int b_,int c_)
    {
        u=a_;
        v=b_;
        w=c_;
    }
};
vector<edge> edges;
bool comp(edge a,edge b)
{
    return a.w<b.w;
}
int find_parent(int x)
{
    if(par[x]==x)
        return x;
    else
        return find_parent(par[x]);
}
bool same_set(int x,int y )
{
    int X=find_parent(x);
    int Y=find_parent(y);
    if(X!=Y)
    return false;
    else
        return true;

}
int mst()
{
    sort(edges.begin(),edges.end(),comp);
    int we=0;
    for (int i=0;i<edges.size();i++)
    {
        if(!same_set(edges[i].u,edges[i].v))
           {
               int x=edges[i].u;
               int y=edges[i].v;
               par[y]=x;
               we+=edges[i].w;


           }

    }
    return we;
}




int main()
{
    int e;
    cin>>e;
    for (int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        par[u]=u;
        par[v]=v;
        edges.push_back(edge(u,v,w));

    }
    int d=mst();
    cout<<d<<endl;


}
