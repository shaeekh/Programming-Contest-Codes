#include<bits/stdc++.h>
using namespace std;
#define maxi 1000004
int par[maxi];

struct edge
{
    int f,l,w;
    edge(int a,int b,int c)
    {
        f=a;
        l=b;
        w=c;

    }



};
vector<edge> v;
bool comp(struct edge x,struct edge y)
{
    return x.w>y.w;
}
int  find_parent(int x)
{
    if(par[x]==x)
        return x;
    else
       return find_parent(par[x]);
}
bool same_set(int x,int y)
{

    int X=find_parent(x);
    int Y=find_parent(y);

    if(X!=Y)
        return false;
    else
        return true;
}


int main()
{

    int n,m;
    int dop=0;

    while(cin>>n>>m)
    {

        if(n==0 && m==0)
            break;


        memset(par,0,sizeof(par));
        v.clear();



    map<string,int> mp;
    int mpcount=0;
    for (int i=0;i<m;i++)
    {
        int fi,se;
        string a,b;
        int c;
        cin>>a>>b;
        cin>>c;
        //cout<<mp[a]<<" "<<mp[b]<<endl;
        //cout<<"input"<<endl;
        if(mp[a]==0)
            {
                ++mpcount;
                mp[a]=mpcount;
          //      cout<<mp[a]<<endl;
                fi=mpcount;
                //cout<< "a er mpcount "<<fi<<endl;

                  par[fi]=fi;
            }


        if(mp[b]==0)
            {
                 ++mpcount;
                mp[b]=mpcount;
            //    cout<<mp[b]<<endl;
                se=mpcount;
                 //cout<< "b er mpcount "<<se<<endl;
                //par[se]=se;

                  par[se]=se;
            }

//printf("shesh\n");


        v.push_back(edge(mp[a],mp[b],c));
    }
    sort(v.begin(),v.end(),comp);
    string s1,s2;
    cin>>s1>>s2;
   // int blu=min(mp[s1],mp[s2]);
    //int glu=max(mp[s1],mp[s2]);
    //cout<<blu<<" "<<glu<<endl;

//    cout<<blu-1<<" "<<glu<<endl;


    int mst=INT_MAX;
//printf("\n\nnow\n");


    for (int i=0;i<m;i++)
    {
   //   cout<<v[i].f<< " "<<v[i].l<<" "<<v[i].w<<endl;
      //cout<<v[i].w<<endl;
        if(!same_set(v[i].f,v[i].l))
        {

            int X=find_parent(v[i].f);
            int Y=find_parent(v[i].l);
            //cout<<X<<"  "<<Y<<endl;
            par[Y]=X;

        if(mst>v[i].w)
        {
            mst=v[i].w;
        }
           if(find_parent(mp[s1])==find_parent(mp[s2]))


            {

                  break;


            }
        }


           //     break;

        // cout<<"bhitore  "<<v[i].w<<endl;
         //cout<<mst<<endl;
    }


    printf("Scenario #%d\n",++dop);
   // printf("final  ");
    cout<<mst<<" tons"<<endl;
    cout<<endl;
}
}


