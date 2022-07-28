#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>

using namespace std;
queue<int>S;
int count=1;
vector<vector<int> >G;
int visited[10000]={0},temp[10000];
void dfs(int u)
{
    if(visited[u])
        return;
    vector<int>::iterator i;
    visited[u]=1;
    for(i=G[u].begin();i!=G[u].end();i++)
    {
        dfs(*i);
    }
    S.push(u);
}
void display()
{
    cout<<"Scenario #"<<":"<<endl<<endl;
    int count1=1;
    while(S.size()!=0)
    {
        cout<<"present size "<<S.size()<<endl;
        printf("before count %d\n",count1);

        cout<<count1++<<" "<<S.front()<<endl<<endl;
         printf("after count %d\n",count1);
        S.pop();
    }
 //   count++;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<=9998;i++)
            visited[i]=0,temp[i]=0;
        int n,m,a,b;
        cin>>n>>m;
        G=vector<vector<int> >(n+5);
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            temp[b]=1;
            G[a].push_back(b);
        }
        for(int i=0;i<n;i++)
            if(temp[i]==0)
                dfs(i);
        display();
    }

}
