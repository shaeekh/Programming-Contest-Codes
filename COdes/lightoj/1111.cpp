#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define max 2005
#define pb push_back
vector<int> v[max];
map<int,int> mp;
int visit[max];
void BFS(int s)
{
    visit[s]=1;

    queue<int> q;
    q.push(s);
     while(!q.empty())
     {

         int u=q.front();
            mp[u]++;
         q.pop();

         int l=v[u].size();


         for (int i=0;i<l;i++)
         {
            int ne=v[u][i];
            if(visit[ne]==0)
         {
            // cout<<"u to v "<<u<<" "<<ne<<endl;
            visit[ne]=1;
            q.push(ne);

        //    dis[ne]=dis[u]+1;
        }
        }
     }
}

int main()
{
    int t;
    scanf("%d",&t);
    int co=0;
    while(t--)
    {
        memset(visit,0,sizeof(visit));
        memset(v,0,sizeof(v));
        mp.clear();
        int k,n,m;
        scanf("%d %d %d",&k,&n,&m);
        stack<int> s;
        for (int i=0;i<k;i++)
        {
            int newmem;
            //cin>>newmem;
            scanf("%d",&newmem);
            s.push(newmem);
        }
        for (int i=0;i<m;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            v[a].pb(b);
        }
        while(!s.empty())
        {
            int b=s.top();
        //    cout<<"b is "<<b<<endl;
            memset(visit,0,sizeof(visit));
            s.pop();
            BFS(b);
        }
        int con=0;
      //  cout<<"mps "<<mp[3]<<" "<<mp[4]<<endl;
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==k)
                con++;

        }
        printf("Case %d: %d\n",++co,con);

}
}
