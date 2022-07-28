#include<bits/stdc++.h>

using namespace std;

bool vis[105];
vector<int>v[105],ans;


void take( int p ) {
    if( !vis[ p ] ) {
        // i am taking all the items that i should take before p
        for(int i=0; i<v[p].size(); i++)
            {take( v[p][i] );
        ans.push_back( p ); // now i can take it
        int kol=[p][i];
        visit[kol]=true;
    }
}
}
int main()
{
  int n,m;
  while(scanf("%d %d", &n, &m)==2)
    {
       ans.clear();
       for(int i=0;i<105;i++) v[i].clear();
       memset(vis,false,sizeof vis);

       for(int i=1;i<=m;i++)
    {
          int t,k;
          cin>>t>>k;
          for(int i=1; i<=k;i++)
           {
             int temp;
             cin>>temp;
             v[t].push_back(temp);
           }
    }




       for(int i=1; i<=n; i++) take( i );
       for(int i=0; i<n; i++) printf("%d ", ans[i] );
       cout<<endl;
    }

    return 0;
}
