#include<bits/stdc++.h>
using namespace std;
#define max 159
int visit[max];
vector<int> v[243];
stack<int> s;
void dfs(int st);


//bool visit
int main()
{

    int n,m;
    while(cin>>n>>m)
    {
    //    printf("loop\n");
        if(n==0 && m==0)
          break;
        //while(!s.empty())
          //  s.pop();
        for (int i=0;i<n;i++)
        {
           // if(i==n)
             //   cout<<v[i][0];
            v[i].clear();
        }

        memset(visit,0,sizeof(visit));
        for (int i=1;i<=m;i++)
        {
            int a,b;
            cin>>a>>b;
            v[a-1].push_back(b-1);
        }
       // printf("pushed\n");

        for ( int i=0;i<n;i++)
            {
            if (visit[i]==0)
            dfs(i);
            }


        int cnt=0;
       // printf("size %d\n",s.size());

        while(!s.empty())
  {
      int d=s.top();
     // printf("dhuksi\n");
       if(cnt!=n-1)
       printf("%d ",d+1);
       else
         printf("%d\n",d+1);
       s.pop();
       cnt++;

}
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
            ////////visit[p]=1;
            dfs(p);


        }

    }
    s.push(st);
    printf("top %d\n",s.top()+1);

}
