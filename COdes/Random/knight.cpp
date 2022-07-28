#include<bits/stdc++.h>
using namespace std;
#define sizeit 78
//int n,m;
#define valid(f,g) ((f>=0 && f<8) && (g>=0 && g<8))
//char grid[sizeit][sizeit];
bool visit[sizeit][sizeit];
int dist[sizeit][sizeit];
//int n,m;
//int co;
int fx[8]={2,2,-2,-2,1,-1,1,-1};
int fy[8]={1,-1,1,-1,2,2,-2,-2};
void bfs(int p,int q);
int main()
{
     string s1,s2;
    //int t;
    //cin>>t;

       // co=0;

       while(cin>>s1>>s2)
       {
           memset(visit,0,sizeof(visit));
           memset(dist,0,sizeof(dist));
          // printf("shuru\n");

           int q=s1[0]-'a';
           //cout<<p<<endl;
           int p=s1[1]-'0'-1;
           //cout<<q<<endl;

           int n=s2[0]-'a';
           //cout<<m<<endl;
           int m=s2[1]-'0'-1;
           //cout<<n<<endl;
           //printf("done\n");
        //cin>>m>>n;
        //int p,q;
        //getchar();




        //getchar();
        //cout<<s1<<endl;
        //cout<<s2<<endl;
        if(valid(p,q))

            {
               // cout<<valid(p,q)<<endl;
                //printf("valid\n");
              //  co=1;

           bfs(p,q);
           cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<dist[m][n]<<" knight moves."<<endl;
            }



       }
}


void bfs(int p,int q)
{
   visit[p][q]=true;
   dist[p][q]=0;
   queue<int> qx;
   queue<int> qy;
   qx.push(p);
   qy.push(q);
   while(!qx.empty())
   {
       int ux=qx.front();
       int uy=qy.front();
       for (int st=0;st<8;st++)
       {
           int v1=ux+fx[st];
           int v2=uy+fy[st];
             if(valid(v1,v2) &&(!visit[v1][v2]))

       {
           visit[v1][v2]=true;
           dist[v1][v2] =dist[ux][uy]+1;
           qx.push(v1);
           qy.push(v2);

       }
       }
        qx.pop();
        qy.pop();
   }
//return co;c
}

