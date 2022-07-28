#include<bits/stdc++.h>
using namespace std;
#define maxi 15009
int visit[maxi];
vector<int> v[maxi];
vector<int> v3[maxi];
vector<int> par[maxi];
int temp[maxi];
queue<int> s;
//map<int,int> mp;
map<int,int> mp;
int dis[maxi];
void dfs(int st);
int time1=0;



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
        memset(dis,0,sizeof(dis));
         memset(visit,0,sizeof(visit));
         memset(temp,0,sizeof(temp));
         mp.clear();
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
            v[b].push_back(a);
            temp[a]=1;
        }
       // printf("pushed\n");

        for ( int i=0;i<n;i++)
            {
                if ( temp[i]==0)
                dfs(i);
            }
          //  int ranki=1;

printf("Scenario #%d:\n\n",p);
int ranki=1;
//int curs=0;
while(!s.empty())
  {

      int d=s.front();



       printf("%d  %d\n\n",ranki++,d);
       s.pop();

}

//cout<<endl;
    }
}
void dfs(int st)
{

    printf("time is %d and st is %d\n",time1,st);

    visit[st]=1;

    for (int x=0;x<v[st].size();x++)
    {
        int p=v[st][x];
        if(visit[p]==0)
        {
          // par[st].push_back(p);
            //if(par[st].size()>1)
              //  {sort(par[st].begin(),par[st].end());
               // mp[p]=st;
              //  dis[st]=1;



            ////////visit[p]=1;
            dfs(p);

        }

    }
    //time1++;
   // time1++;
    //dis[st]=time1;
    s.push(st);
   // mp[st]=dis[st];

    //printf("top %d\n",s.top());

}


