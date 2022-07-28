#include<bits/stdc++.h>
using namespace std;
//int n;
#define N 100010
long long int par[N];
long long int rank_it[N];
/*void make_it(int n)
{
    for (int i=1;i<=n;i++)
    {
        par[i]=i;
        rank_it[i]=0;
    }

}
*/
long long int find_it(long long int x)
{
    if(par[x]==x)
        return x;
    else
    {par[x]=(find_it(par[x]));
    return par[x];
    }
}
bool same_set(long long int x,long long int y)
{
    if(par[x]==par[y])
        return true;
    else
        return false;


}
void join(long long int X,long long int Y)
{
 long long   int x=find_it(X);
 long long int y=find_it(Y);
    bool now=same_set(x,y);
    if(!now)
    {
        if(rank_it[x]>rank_it[y])
        {
            par[y]=x;
            rank_it[x]+=rank_it[y];
            cout<<rank_it[x]<<endl;
        }
        else
            {
                par[x]=y;
                rank_it[y]+=rank_it[x];
                cout<<rank_it[y]<<endl;


            }

    }
    else
        cout<<rank_it[x]<<endl;

}
int main()
{
   long long  int t;
    cin>>t;
    long long int edge;
    for (int i=1;i<=t;i++)
    {
        cin>>edge;
        map<string,int> mp;
        string s1,s2;
         long long  int cou=0;
        //make_it(edge);
        for (int j=1;j<=edge;j++)
        {

            cin>>s1>>s2;
            if(mp.find(s1)==mp.end())
            {
                mp[s1]=++cou;
                par[cou]=cou;
                rank_it[cou]=1;
            }
             if(mp.find(s2)==mp.end())
            {
                mp[s2]=++cou;
                par[cou]=cou;
                rank_it[cou]=1;
            }
            long long p1=mp[s1];
            long long p2=mp[s2];
            join(p1,p2);



        }

    }
}
