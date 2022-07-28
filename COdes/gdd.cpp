#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
map<int,char> mp2;
#define maxi 100
int visit2[maxi];
vector<int> v[maxi];
queue<int> st;
int visit[maxi];
bool fl;

void dfs(int s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d=0;


        for(int i=0;i<maxi;i++)
            v[i].clear();
        fl=true;

        int n,q;
        cin>>n>>q;

        while(q--)
        {
            char a,b,c;

         cin>>a>>b>>c;

             if(visit2[mp[a]]==0)
                {
                    visit2[mp[a]]=1;
            printf("dhukse\n");
                    printf("%d holo mp AND char %c\n",mp[a],a);
                    mp[a]=d;
                  //cout<<mp[a]<<endl;
                   // cout<<mp[a]<<endl;
                    mp2[d]=a;
                    d++;
                //    cout<<"d "<<d<<endl;
                  // cout<<"mp2 te " <<mp2[d]<<" and d "<<d<<endl;
                }
            if(visit2[mp[c]]==0)
                {
                    printf("ekhaneo dhukse\n");
                    visit2[mp[c]]=1;
                    printf("%d holo mp AND char %c\n",mp[c],c);
                    mp[c]=d;
                    cout<<mp[c]<<endl;
                    mp2[d]=c;
                    d++;
                    cout<<"d "<<d<<endl;
                    cout<<"mp2 te "<<mp2[d]<<" and d "<<d<<endl;
                }
            if(b=='>' || b=='=')
            {
                v[mp[a]].push_back(mp[c]);


            }
            else

            {
                 v[mp[c]].push_back(mp[a]);


            }
            //printf("bal ");
            //cout<<mp['A']<<endl;

        }

        for(int i=0;i<n;i++)
        {

     //       printf("finally for %d ",i);
       //     cout<<mp2[i]<<endl;
            if(visit[i]==0)
                dfs(i);

        }
        if(fl==false)
        {
            printf("Impossible\n");
        }
        else
        {


        while(!st.empty())
        {
            int go=st.front();
             cout<<mp2[go];
             //cout<<endl;
             //printf("shesh\n");
            st.pop();

        }

        cout<<endl;
        }
         mp.clear();
        mp2.clear();
        while(!st.empty())
            st.pop();
        memset(visit,0,sizeof(visit));
        memset(visit2,0,sizeof(visit2));


    }
}
void dfs(int s)
{
    visit[s]=1;
    for (int i=0;i<v[s].size();i++)
    {

        int nl=v[s][i];
   cout<<s<<" "<<nl<<endl;
        if(visit[nl]==0)
        {
            cout<<"visited holo "<<nl<<endl;
            visit[nl]=1;
            dfs(nl);

        }
        if(visit[nl]==1)
        {

           fl=false;

        }

    }
    visit[s]=2;
    st.push(s);




}
