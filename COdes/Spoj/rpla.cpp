#include<bits/stdc++.h>
using namespace std;
#define maxi 15009
int visit[maxi];
vector<int> v[maxi];
vector<int> v3[maxi];
vector<int> par[maxi];
queue<int> s;
map<int,int> mp;
map<int,int> mp2;
struct data
{
    int ran;
    int node;

};
void dfs(int st);



//bool visit
int main()
{

    int t;
    scanf("%d",&t);
    for (int p=1;p<=t;p++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        for (int i=0;i<maxi;i++)
        {
           // if(i==n)
             //   cout<<v[i][0];
            v[i].clear();
        }
         memset(visit,0,sizeof(visit));
         if(!s.empty())
         {


         while(!s.empty())
         {
             s.pop();
         }
         }

        //int n,m;
        //scanf("%d %d",&n,&m);
        while(m--)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
        }
       // printf("pushed\n");

        for ( int i=0;i<n;i++)
            {
                if (visit[i]==0)
                dfs(i);
            }
            int ranki=1;

printf("Scenario #%d:\n\n",p);
int ranki=1;
int curs=0;
while(!s.empty())
  {
      int d=s.front();
      if(par[mp[d]].size()>1)
    {
        curs=par[mp[d]].size();

             printf("%d %d\n\n",ranki,d);
             curs--;
             mp[]
    }




    else
    {


       printf("%d %d\n\n",ranki,d);
    }
       s.pop();
       ranki++;
}
//cout<<endl;
    }
}
void dfs(int st)
{

    visit[st]=1;
    for (int x=0;x<v[st].size();x++)
    {
        int p=v[st][x];
        if(visit[p]==0)
        {
            par[st].push_back(p);
            if(par[st].size()>1)
                {sort(par[st].begin(),par[st].end());
                mp[p]=st;


            ////////visit[p]=1;
            dfs(p);


        }

    }
    s.push(st);

    //printf("top %d\n",s.top());

}
