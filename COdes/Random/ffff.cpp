#include<bits/stdc++.h>
using namespace std;
#define max 159
int visit[max];
vector<int> v[243];
stack<int> s;
void dfs(int st);
map<string,int> mp;
map<int,string> mp2;


//bool visit
int main()
{

    int n;
    while(cin>>n)

{
        string s;
        int co=0;
        for (int i=0;i<n;i++)
        {
            cin>>s;
            mp[s]=co;
            mp2[co]=s;
            co++;

        }
        int op;
        cin>>op;
        string s1,s2;
        for (int i=0;i<op;i++)
        {
            cin>>s1>>s2;
           v[mp[s1]].push_back(mp[s2]);

        }
        for (int i=0;i<n;i++)
        {
            if(visit[m2[i])
        }


        }

