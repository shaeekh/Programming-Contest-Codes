/*
Writer:Shaeekh Al Jahan
Problem:UVA-567
Category:BFS
*/
#include<bits/stdc++.h>
using namespace std;
int bfs(int s, int d,vector<int> graph[] )
{
    queue< int >q;
    int visited[50]={0}, level[50];
    visited[s]=1;
    level[s]=0;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();
        for(int l=0; l<graph[u].size(); l++)

            //ami shob array 1 indexing e korsi kintu tao eta 0 indexing e na korle crash korse,keno?
        {
            int v = graph[u][l];
            if(!visited[v])
            {
                visited[v]=1;
                level[v] = level[u]+1;
                q.push(v);
            }
        }
        q.pop();
    }
return level[d];
}


int main()
{
    //vector<int> v[25];
    int n;
    int code=0;
    //int h=1;
     int a;

    while(scanf("%d",&n)==1)
  {
      vector<int> v[21];
      //cout<<"n holo "<<n<<endl;
            //int n;
            //cin>>n;  f
            for(int j=1; j<=n; j++)
        {
            scanf("%d",&a);
            v[1].push_back(a);
            v[a].push_back(1);
        }




//  for (int op=1;op<=25;op++)
  //  v[op].clear();

for (int peee=2;peee<=19;peee++)
 {
     cin>>n;
     for (int  j=1;j<=n;j++)
        {

//            cout<<"n and j "<<n<<" "<<j<<endl;
            //ekhane j er man protibar e 1 ashe ken??
            cin>>a;
  //          cout<<"a holo "<<a<<endl;
            //n er man a er moddhe chole ashse keno?


                v[peee].push_back(a);
                v[a].push_back(peee);
//                printf("sheshe\n");

        }
 }
        //cout<<"h  "<<h<<endl;
       // if(h==19)



        //printf("a nea shesh\n");
        int qu;
        cin>>qu;
        int st,en;
        //printf("qu nea shesh\n");
        printf("Test Set #%d\n",++code);
        for (int ind=1;ind<=qu;ind++)
        {
        //    printf("dhuksi\n");

           cin>>st>>en;
           int d=bfs(st,en,v);
     //   cout<<d<<endl;
             printf("%2d to %2d: %d\n",st,en,d);
        }
        //printf("ber hoisi\n");
        cout<<endl;

    }
    return 0;
}


