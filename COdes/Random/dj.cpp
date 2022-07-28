#include<bits/stdc++.h>
using namespace std;
#define maxi 100006
vector<int> v[maxi];
int visit[maxi];
stack<int> s;
int c;
void dfs(int st);

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)

            break;
         c=0;
        memset(visit,0,sizeof(visit));
        for (int i=0;i<maxi;i++)
            v[i].clear();


    for (int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a-1].push_back(b-1);

    }

    for (int i=0;i<n;i++)
    {
        if(visit[i]==0)
         dfs(i);

    }
    if(c==1)
        printf("IMPOSSIBLE\n");
    else
    {
        //int co=0;
        while(!s.empty())
        {

            printf("%d\n",s.top()+1);
            s.pop();
          //  co++;
        }
     //   printf("\n");
    }
}
}
void dfs (int st)
{
    //bool flag=false;
    visit[st]=1;
    int le=v[st].size();
    for (int i=0;i<le;i++)
    {
        int d=v[st][i];
        if(visit[d]==0)
            {
             //   visit[d]==1;
                dfs(d);
            }
        if(visit[d]==1)
        {
            //printf("d %d and st %d\n",d,st);
            c=1;
            //break;

        }
    }
    visit[st]=2;
    s.push(st);
  //  printf("pushed %d\n",s.top());
//    return flag;


}
