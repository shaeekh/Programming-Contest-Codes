#include<bits/stdc++.h>
using namespace std;
vector<int> adj[104];
void dfs(int st);
void dfs_visit(int u);
int visited[242];
int start[104];
//int  finish[104];
stack<int> finish;
//int mark[104];
int coo=0;
int time1,n;
bool comp(int x,int y)
{
    return x>y;
}

int main()
{
    memset(visited,0,sizeof(visited));
    //memset(start,0,sizeof(start));
    //memset(finish,0,sizeof(finish));

    int m;
    cin>>n>>m;
    //int mark[n];
//    memset(mark,0,sizeof(mark));
//    memset(finish,-1,sizeof(finish));
    int curn,k;
    for (int i=0;i<m;i++)
    {
        //printf("i %d\n",i);

        cin>>curn;
        curn=curn-1;
        //cout<<"curn" <<curn<<endl;
        cin>>k;
      //  cout<<"k "<<k<<endl;
        for (int j=0;j<k;j++)
        {
        //    printf("j %d\n",j);
            int guru;
            cin>>guru;
            guru=guru-1;
     //          printf("false pushing %d to %d\n",curn,guru);
          //  cout<<"guru "<<guru<<endl;
            adj[guru].push_back(curn);
           // printf("size %d er %d\n",guru-1,adj[guru-1].size());
      //      mark[curn]=1;
//            printf("uu ");
       //     printf("pushing %d to %d\n",curn-1,guru-1);
        }
    }
    for (int pq=0;pq<n;pq++)
    {
        sort(adj[pq].begin(),adj[pq].end(),comp);
    }


    //printf("ber hosi\n");
        //int st;
       //for(int q=0;q<n;q++)
       // {
        //if(mark[q]==0)
        //{
          //  st=q;
           // break;
       // }

        //}
     //   for(int ii = 0; ii < n; ii++) {
      // cout << ii<< " ' s Adjacent : ";
        //for(int jj = 0; jj < adj[ii].size(); jj++) {
          // cout<<adj[ii]][jj]<< "  ";
        //}
        //}
//printf("%d\n",adj[i][j]);



           //  st=q;
                   //break;
         //}
         //else
         //{
           //  printf("%d er shathe to faka nai\n",q);
             //for (int k=q;k<adj[q].size();k++)
               // cout<<adj[q][k]<<" ";
        //}
        //cout<<endl;
        //}
         //else
         //{
             //printf("pushed numbers in %d  ",q);
             //for (int pp=0;pp<adj[q].size();pp++)
               // cout<<adj[q][pp]<<" ";
         //}
        // cout<<endl;


     //   }
        // cout<<"st "<<st<<endl;
 //       printf("before dfs\n");
 int st=n-1;
        dfs(st);
   //     printf("after dfs\n");
   //int cou=0;
   while(!finish.empty())
   {
       int u=finish.top();
       cout<<u+1<<" ";
        finish.pop();
   }
      /*  for (int kkk=1; ;kkk--)
            {
                if(finish[kkk]!=-1)
                {
                    cou++;
                    if(cou!=n)
                    printf("%d ",kkk+1);
                    else if(cou==n)
                    {
                        printf("%d",kkk+1);
                        break;

                }
            }
            }
            cout<<endl;
*/
}



void dfs(int st)
{

    //cout<<st<<endl;
   //start[st]=1;
//printf("in dfs\n");

  // time1=0;
   dfs_visit(st);
  // printf("back\n");
   for (int i=n-1;i>=0;i--)
   {
       if(visited[i]==0)
       {
           //time1=0;
           dfs_visit(i);
       }

   }
}
void dfs_visit(int u)
{

  //  printf("in dfs visit %d\n",u);
    //time1=time1+1;
  //  printf("time1 %d\n",time1);
    visited[u]=1;
    //printf("%d\n",visited[u]);
    //printf("ekhan theke \n");

   //start[u]=time1;
 //   printf("start er moddhe %d\n",adj[u].size());

    for (int j=0;j<adj[u].size();j++)
    {
    //    printf("j ");
        int v=adj[u][j];
      //  printf("%d er under e %d\n",u,v);
        if(visited[v]==0)
        {
        //     printf("ditio %d er under e %d\n",u,v);
            visited[v]=1;
            dfs_visit(v);

        }

    }

   // time1=time1+1;
 //   finish[u]=time1;
    finish.push(u);
     //printf("%d ",u+1);


}

