#include<bits/stdc++.h>
using namespace std;

#define max 305
vector<int> v[max];
int visited[max];
int par[max];
void dfs(int s);
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
        v[b].push_back(a);


    }
    for (int i=0;i<ver;i++)
    {
        if(visited[i]==0)
            dfs(i);
    }
}
void dfs(int s)
{
    visited[s]=1;
    int l=v[s].size();
    for (int i=0;i<l;i++)
    {
        int ne=v[s][i];
        if(visited[ne]==0)
        {
             printf("depth of %d  is %d \n",s,ne);

            par[ne]=s;
            dfs(ne);

        }

    }
    visited[s]=2;
   // printf("%d \n",s);

}
