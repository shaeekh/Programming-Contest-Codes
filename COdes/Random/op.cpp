#include<bits/stdc++.h>
using namespace std;

#define maxi 100025
vector<int> v[maxi];
vector<int> rev[maxi];
vector<int> finish;
vector<int> scc[maxi];
int visited[maxi];
int indegree[maxi];




int main()
{
    int t;
    cin>>t;
    int dom=0;
    while(t--)
    {
    //    cout<<endl;



    int ver,edge;
    cin>>ver>>edge;

        for (int i=0;i<maxi;i++)
        {
            //rev[i].clear();
            v[i].clear();
            //scc[i].clear();

        }

         memset(visited,0,sizeof(visited));
         memset(indegree,0,sizeof(indegree));


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
            indegree[b]++;
            //rev[b].push_back(a);


//        v[b].push_back(a);


    }
    int coun=0;
    for (int i=0;i<ver;i++)
    {
        if(indegree[i]==0)
            coun++;
    }

    printf("Case %d: %d\n",++dom,coun);
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






