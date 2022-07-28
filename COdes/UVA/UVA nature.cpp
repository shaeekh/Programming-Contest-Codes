#include<bits/stdc++.h>
using namespace std;
//int n;
#define N 5032
int par[N];
int rank_it[N];
void make_it(int n)
{
    for (int i=1;i<=n;i++)
    {
        par[i]=i;
        rank_it[i]=0;
    }

}
int find_it(int x)
{
    if(par[x]==x)
        return x;
    else
    {par[x]=(find_it(par[x]));
    return par[x];
    }
}
bool same_set(int x,int y)
{
    if(par[x]==par[y])
        return true;
    else
        return false;


}
void join(int X,int Y)
{
    int x=find_it(X);
    int y=find_it(Y);
    bool now=same_set(x,y);
    if(!now)
    {
        if(rank_it[x]>rank_it[y])
        {
            par[y]=x;
            rank_it[x]+=rank_it[y];
        }
        else
            {
                par[x]=y;
                rank_it[y]+=rank_it[x];



        }

    }

}
int main()
{
    for ( ; ; )
    {



    int m,n;
    cin>>n>>m;
    if(n==0 && m==0)
        break;
     make_it(n);
    string s;
    map<string,int> mp;


    for (int i=1;i<=n;i++)
    {
        cin>>s;
        mp[s]=i;
        rank_it[i]=1;


    }
    string s1,s2;
    int maxi=0;
    for (int i=1;i<=m;i++)
    {
        cin>>s1>>s2;
        join(mp[s1],mp[s2]);


    }
    for (int k=1;k<=n;k++)

        {maxi=max(maxi,rank_it[k]);
        }
        //maxi=rank_it[i];


    cout<<maxi<<endl;
}
}

