#include<bits/stdc++.h>
#define size_it 54
#define valid(i,j) ((i>=0 && i<m) && (j>=0 && j<n))
using namespace std;
char grid[size_it][size_it];
bool visited[size_it][size_it];
int n,m;
int cou;
int fx[]= {1, 0, 0, -1};
int fy[]= {0, -1, 1 ,0};
void dfs(int p,int q);

int main()
{
    int t;
    cin>>t;
  //int n,m;
    for (int i=1;i<=t;i++)
    {


        cin>>n>>m;
        memset(visited,0,sizeof visited );
        getchar();
        int p,q;
        for (int j=0;j<m;j++)
        {
            for (int k=0;k<n;k++)
            {
                grid[j][k]=getchar();
                if(grid[j][k]=='@')
                {
                    p=j;
                    q=k;
                    visited[p][q]=true;
                }

            }

            getchar();
        }
           cou=1;
           if(valid(p,q))
            dfs(p,q);

            printf("Case %d: %d\n",i,cou);
         //for (int j=0;j<n;j++)
           // {
             //   for (int k=0;k<=m;k++)
            // {
                  //  if(!visited[j][k])
                    //    cout<<j<<" "<<k<<grid[j][k]<<endl;
            //    }
            //}


        }



    }




void dfs(int p,int q)
{
    for (int st = 0; st<4 ;st++)
    {
        if(valid(p+fx[st],q+fy[st]) && grid[p+fx[st]][q+fy[st]]=='.' && !visited[p+fx[st]][q+fy[st]])
        {
            visited[p+fx[st]][q+fy[st]]=true;
            cou++;
           // cout<<cou<<"   "<<grid[p+fx[st]][q+fy[st]]<<endl;

            dfs(p+fx[st],q+fy[st]);
        }
    }

}
