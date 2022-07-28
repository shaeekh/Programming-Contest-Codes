#include<bits/stdc++.h>
using namespace std;
map<char,int> mp;
map<int,char> mp2;
#define maxi 100
vector<int> v[maxi];
queue<int> st;
int visit[maxi];
bool fl;
int visit2[maxi];
void dfs(int s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d=0;

        mp.clear();
        mp2.clear();
        while(!st.empty())
            st.pop();
        memset(visit,0,sizeof(visit));
        memset(visit2,0,sizeof(visit2));
        for(int i=0;i<maxi;i++)
            v[i].clear();
        fl=true;
      //cout<<endl;
        int n,q;
        cin>>n>>q;

        while(q--)
        {
            char a,b,c;
            //getchar();
         cin>>a>>b>>c;
         printf("primary %d %d\n",mp[a],mp[c]);
              if(visit2[mp[c]]!=0)
                        printf("jhamea\n");
         printf("primary  visit %d %d\n",visit2[mp[a]],visit2[mp[c]]);
              if(visit2[mp[c]]!=0)
                        printf("jhamea\n");
             if(visit2[mp[a]]==0)
                {


            printf("dhukse\n");
                    printf("%d holo mp AND char %c\n",mp[a],a);
                    mp[a]=d++;
                  //cout<<mp[a]<<endl;
                   // cout<<mp[a]<<endl;
                    mp2[d-1]=a;
                     visit2[mp[a]]=1;

                    //d++;
                    cout<<"d "<<d<<endl;
                   cout<<"mp2 te " <<mp2[d-1]<<" and d "<<d<<endl;
                }
                printf("shesh\n");
                cout<<visit2[mp[c]]<<endl;
            if(visit2[mp[c]]==0)
                {
                    printf("ekhaneo dhukse\n");
                    visit2[mp[c]]=1;
                    printf("%d holo mp AND char %c\n",mp[c],c);
                    mp[c]=d++;
                    cout<<mp[c]<<endl;
                    mp2[d=1]=c;
                     visit2[mp[c]]=1;
                    //d++;
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
