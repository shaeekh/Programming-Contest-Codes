#include<bits/stdc++.h>
using namespace std;
#define maxi 1000004
int par[maxi];
struct edge
{
    int f,l,w;
    edge(int a,int b,int c)
    {
        f=a;
        l=b;
        w=c;

    }



};
vector<edge> v;
bool comp(struct edge x,struct edge y)
{
    return x.w<y.w;
}
int  find_parent(int x)
{
    if(par[x]==x)
        return x;
    else
       return find_parent(par[x]);
}
bool same_set(int x,int y)
{

    int X=find_parent(x);
    int Y=find_parent(y);

    if(X!=Y)
        return false;
    else
        return true;
}


int main()
{

    int n,m;

    cin>>n>>m;
    for (int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        par[a]=a;
        par[b]=b;
        v.push_back(edge(a,b,c));
    }
    sort(v.begin(),v.end(),comp);


    int mst=0;
//printf("\n\nnow\n");

    for (int i=0;i<m;i++)
    {
        //cout<<v[i].f<< " "<<v[i].l;
        if(!same_set(v[i].f,v[i].l))
        {


        int X=find_parent(v[i].f);
        int Y=find_parent(v[i].l);
        par[Y]=X;
         mst+=v[i].w;

         //cout<<" "<<v[i].w<<endl;
         //cout<<mst<<endl;
        }

    }
   // printf("final  ");
    cout<<mst<<endl;
}
