#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
//map<int,int> mp2;
vector<int>v[10005];
int visited[10005];
//stack<int> st;

bool flag;
void dfs(int s);
int main()
{
    int t;
    scanf("%d",&t);
    int bb=0;
    while(t--)
    {
        int dp=0;

        flag=true;


//    while(!st.empty())
  //      st.pop();
    memset(visited,0,sizeof(visited));
    mp.clear();
    //mp2.clear();

    int m;
    scanf("%d",&m);
    for (int i=0;i<m;i++)
    {
        //printf("current dp %d\n",dp);
        string a,b;
        cin>>a>>b;
     if(!mp[a])
        {mp[a]=dp++;
        }
       // cout<<a<<" eta a "<<mp[a]<<" eta mpa "<<endl;

        //mp2[d]++;
        if(!mp[b])

        {mp[b]=dp++;
        }
        //cout<<b<<" eta b "<<mp[b]<<" eta mpb "<<endl;
        //mp2[dp]++;
        v[mp[a]].push_back(mp[b]);
        //printf("dhukse\n");

    }
    //cout<<"dp is " <<dp<<endl;
    //for (int i=0;i<dp;i++)
      //  cout<<" visit of "<<i<<" "<<visited[i]<<endl;

    for (int i=0;i<dp;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
            if(flag==false)
            break;

        }


    }
   // printf("flag is %d\n",flag);
    if(flag)
    {
        printf("Case %d: Yes\n",++bb);

    }
    else
        printf("Case %d: No\n",++bb);
         for (int i=0;i<dp;i++)
        v[i].clear();
}
}
void dfs(int s)
{
    visited[s]=1;
    for (int i=0;i<v[s].size();i++)
    {
        int pp=v[s][i];

            if(visited[pp]==1)

                {
                   // printf("eito\n");
                    flag=false;
                }


            else if(visited[pp]==0)
                dfs(pp);



    }
    visited[s]=2;
    //st.push(s);


}


