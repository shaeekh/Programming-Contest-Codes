#include<bits/stdc++.h>
using namespace std;

#define maxi 305
vector<int> v[maxi];
vector<int> rev[maxi];
vector<int> finish;
vector<int> scc[maxi];
int visited[maxi];
int par[maxi];
//void dfs(int s);
//void dfs2(int s,int sc);
void dfs(int s)
{
    visited[s]=1;
    int l=v[s].size();
    for (int i=0;i<l;i++)
    {
        int ne=v[s][i];
        if(visited[ne]==0)
        {
         //    printf("depth of %d  is %d \n",s,ne);

           // par[ne]=s;
            dfs(ne);

        }

    }
    visited[s]=2;
    finish.push_back(s);
   // printf("%d \n",s);

}
void dfs2(int s,int sc)
{
    visited[s]=1;
    scc[sc].push_back(s);
    int sz=rev[s].size();
    for (int i=0;i<sz;i++)
    {
        int nxt=rev[s][i];
        if(visited[nxt]==0)
            dfs2(nxt,sc);
    }
}



int main()
{
    memset(visited,0,sizeof(visited));
    int ver,edge;
    cin>>ver>>edge;
    for (int i=0;i<edge;i++)
    {
        //printf("dhuklam\n");
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        rev[b].push_back(a);
//        v[b].push_back(a);


    }
    for (int i=0;i<ver;i++)
    {
        if(visited[i]==0)
            dfs(i);
    }
   // printf("done 1st part\n");
    reverse(finish.begin(),finish.end());
    memset(visited,0,sizeof(visited));
    int sc=0;
    for(int i=0;i<ver;i++)
    {
        int now=finish[i];
        if(visited[now])continue;
        dfs2(now,sc);
        sc++;
    }
    printf("done dfs2\n");
     int total=sc;
    for(int i=0;i<total;i++)
    {
        cout<<"SCC no "<<i+1<<": \n";
        for(int j=0;j<scc[i].size();j++)
        cout<<scc[i][j]<<" ";
        cout<<endl;
    }
}



