#include<bits/stdc++.h>
using namespace std;
vector<int>Graph[100],RevGraph[100]; // দুটি গ্রাফ স্টোর করার জন্য ভেক্টর
vector<int>order; //১ম ডিএফএস এর পর ফিনিশিং টাইম অনুযায়ী নোড গুলো স্টোর হবে
vector<int>SCC[100];// ফাইনাল SCC এখানে স্টোর হবে
bool vis[1000];
void dfs1(int node)
{
    vis[node]=1;
    int sz=Graph[node].size();
    for(int i=0;i<sz;i++)
    {
        int nxt=Graph[node][i];
        if(vis[nxt]==0)dfs1(nxt);
    }
    order.push_back(node);
}
void dfs2(int node,int SCCno)
{
    vis[node]=1;
    SCC[SCCno].push_back(node);
    int sz=RevGraph[node].size();
    for(int i=0;i<sz;i++)
    {
        int nxt=RevGraph[node][i];
        if(vis[nxt]==0)dfs2(nxt,SCCno);
    }
}
int main()
{
    int n,m,i,j,x,y;
    cin>>n>>m; // নোড ও এজ এর সংখা
    for(i=1;i<=m;i++)
    {
        cin>>x>>y; // x থেকে y এ যাওয়া যায়
        Graph[x].push_back(y); // মুল গ্রাফ এ স্টোর
        RevGraph[y].push_back(x); // রিভার্স গ্রাফ এ স্টোর
    }
    // ১ম ডিএফএস চালালাম
    for(i=0;i<n;i++)
    {
        if(vis[i]==0)dfs1(i);
    }

    reverse(order.begin(),order.end()); // order ভেক্টর টা রিভার্স করে দিলাম
    memset(vis,0,sizeof(vis)); // ২য় দিএফএস এর জন্য ভিজিটেড এরে রিসেট করলাম
    int SCCno=0;
    // রিভার্স অর্ডারে ডিএফএস চালালাম SCC বের করার জন্য
    for(i=0;i<n;i++)
    {
        int now=order[i];
        if(vis[now])continue;
        dfs2(now,SCCno);
        SCCno++;
    }
    int total=SCCno; // মোট কয়টা SCC পাওয়া গেলো
    // এদেরকে প্রিন্ট করা হলো
    for(i=0;i<total;i++)
    {
        cout<<"SCC no "<<i+1<<": \n";
        for(j=0;j<SCC[i].size();j++)cout<<SCC[i][j]<<" ";
        cout<<endl;
    }

}
/*
Input
7 8
0 1
1 2
2 0
2 5
5 3
3 2
5 4
6 4
*/
