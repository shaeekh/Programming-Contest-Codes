#include<bits/stdc++.h>
using namespace std;

#define maxi 100025
vector<int> v[maxi];
vector<int> rev[maxi];
vector<int> finish;
vector<int> scc[maxi];
int visited[maxi];

void dfs(int s)
{
    visited[s]=1;
    int l=v[s].size();
    for (int i=0;i<l;i++)
    {
        int ne=v[s][i];
        if(visited[ne]==0)
        {
         //    printf("depth of %d  is %d \n",s,ne);

           // par[ne]=s;
            dfs(ne);

        }

    }
//    visited[s]=2;
    finish.push_back(s);
   // printf("%d \n",s);

}
void dfs2(int s)
{
    visited[s]=1;
    int l=v[s].size();
    for (int i=0;i<l;i++)
    {
        int ne=v[s][i];
        if(visited[ne]==0)
        {
         //    printf("depth of %d  is %d \n",s,ne);

           // par[ne]=s;
            dfs2(ne);

        }

    }

}



int main()
{
    int t;
    cin>>t;
    int dom=0;
    while(t--)
    {
        cout<<endl;



    int ver,edge;
    cin>>ver>>edge;

        for (int i=0;i<maxi;i++)
        {
            //rev[i].clear();
            v[i].clear();
            //scc[i].clear();

        }

         memset(visited,0,sizeof(visited));


    for (int i=0;i<edge;i++)
    {
        //printf("dhuklam\n");
        int a,b;
        cin>>a>>b;
        a=a-1;
        b=b-1;
        //printf("ekhon\n");
        //cout<<a<<" "<<b<<endl;

            v[a].push_back(b);
            //rev[b].push_back(a);


//        v[b].push_back(a);


    }
    for (int i=0;i<ver;i++)
    {
        if(visited[i]==0)
            dfs(i);
    }
   // printf("done 1st part\n");
   //printf("In decreasing order components of finished\n");
  reverse(finish.begin(),finish.end());
 // for (int i=0;i<ver ;i++)
   // cout<<finish[i]<<" ";
    //cout<<endl;
    memset(visited,0,sizeof(visited));
    int sc=0;
    for(int i=0;i<ver;i++)
    {
        int now=finish[i];
        if(visited[now])
        {
            continue;

        }
        if(visited[now]==0)

        {
          //  cout<<now<<endl;
            dfs2(now);
       sc++;
        }
    }
    printf("Case %d: %d\n",++dom,sc);
  //  printf("done dfs2\n");

}
}

/*

7 8
0 1
1 2
2 0
2 5
5 3
3 2
5 4
6 4
*/





