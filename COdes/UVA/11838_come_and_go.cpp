#include<bits/stdc++.h>
using namespace std;

#define maxi 305
vector<int> v[maxi];
vector<int> rev[maxi];
vector<int> finish;
vector<int> scc[maxi];
int visited[maxi];
//int par[maxi];
//void dfs(int s);
//void dfs2(int s,int sc);
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
void dfs2(int s,int sc)
{
    visited[s]=1;
    scc[sc].push_back(s);
    int sz=rev[s].size();
    for (int i=0;i<sz;i++)
    {
        int nxt=rev[s][i];
        if(visited[nxt]==0)
            dfs2(nxt,sc);
    }
    finish.clear();
}



int main()
{

    int ver,edge;
    while(cin>>ver>>edge)
    {
        if(ver==0 && edge==0)
            break;
        for (int i=0;i<maxi;i++)
        {
            rev[i].clear();
            v[i].clear();
            scc[i].clear();

        }

         memset(visited,0,sizeof(visited));


    for (int i=0;i<edge;i++)
    {
        //printf("dhuklam\n");
        int a,b,c;
        cin>>a>>b>>c;
        if(c==1)
        {
            v[a].push_back(b);
            rev[b].push_back(a);
        }
        else if (c==2)
            {
                v[a].push_back(b);
                v[b].push_back(a);
                 rev[a].push_back(b);
                 rev[b].push_back(a);
            }

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
        {continue;

        }

        dfs2(now,sc);
        sc++;
    }
    if(sc==1)

            printf("1\n");
    else
        printf("0\n");
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





