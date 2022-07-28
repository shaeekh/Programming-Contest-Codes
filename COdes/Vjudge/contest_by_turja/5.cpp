#include<bits/stdc++.h>
using namespace std;
//#define sizeit 78
//int n,m;
#define valid(f,g) ((f>=0 && f<8) && (g>=0 && g<8))
//char grid[sizeit][sizeit];
//bool visit[sizeit][sizeit];
//int dist[sizeit][sizeit];
//int n,m;
//int co;
int fx[8]={2,2,-2,-2,1,-1,1,-1};
int fy[8]={1,-1,1,-1,2,2,-2,-2};
int main()
{
    int t;
    cin>>t;

    for (int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        int p=s[0]-'a';
        int q=s[1]-'0'-1;
       // cout<<p<<q<<endl;
        int co=0;
        for (int j=0;j<8;j++)
        {


        if(valid(p+fx[j],q+fy[j]))
            co++;
        }
        cout<<co<<endl;
    }

}
