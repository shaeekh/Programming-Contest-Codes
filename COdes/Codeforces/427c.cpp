#include<bits/stdc++.h>
using namespace std;
#define maxi 100035
vector<long long int> v[maxi];
vector<long long int> rev[maxi];
long long int visit[maxi];
vector<long long int> finished;
vector<long long int> SCC[maxi];
  long long int a[maxi];
//map<int,int> mp;
long long int sc;
long long int ans=0;
long long int way=1;
long long int c;
long long int mini;

void dfs(long long int s);
void dfs2(long long int s2);

int main()
{
    long long int n;
    cin>>n;

    for (long long int i=0;i<n;i++)
        cin>>a[i];
    long long int m;
    cin>>m;
    while(m--)
    {
        long long int a,b;
        cin>>a>>b;
        a=a-1;
        b=b-1;
        v[a].push_back(b);
        rev[b].push_back(a);
        //cout<<"rev e "<<b+1<<" te pushed "<<a+1<<endl;
    }
    for (long long int i=0;i<n;i++)
    {
        if(visit[i]==0)
            dfs(i);
    }
    memset(visit,0,sizeof(visit));
    reverse(finished.begin(),finished.end());
     sc=1;
    for(long long int i=0;i<n;i++)
    {
        mini=INT_MAX;

        long long int now=finished[i];
        //cout<<"now is "<<now+1<<endl;
        if(visit[now]==1)
        {
            continue;

        }
        if(visit[now]==0)
            {
                dfs2(now);



            ans+=mini;
           // cout<<"ans is "<<ans<<endl;
            way=(way*c)%1000000007;
            }
            sc++;

    }
    printf("%I64d %I64d\n",ans,way);



}

void dfs(long long int s)
{

    visit[s]=1;
    long long int le=v[s].size();

    for (long long int i=0;i<le;i++)
    {
    long long     int ne=v[s][i];
        //int sc=0;
        if(visit[ne]==0)
        {
            dfs(ne);


        }

    }
    finished.push_back(s);

    //cout<<"pushed "<<s+1<<endl;


}
void dfs2(long long int s2)
{
    //cout<<"s2 is "<<s2<<endl;

    visit[s2]=1;
    //cout<<"Tsks "<<a[s2]<<endl;
    if(a[s2]<mini)
    {
        mini=a[s2];
        c=0;

    }
    if(a[s2]==mini)
        c++;
    SCC[sc].push_back(s2);
    //cout<<"rev size "<<rev[s2].size()<<endl;
    long long int l=rev[s2].size();
    for (long long int i=0;i<l;i++)
    {
        int ne=rev[s2][i];
        if(visit[ne]==0)
        {
            dfs2(ne);
        }

    }
}
