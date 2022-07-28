#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int n,t,m;

   // string s;
    queue<int> q[2];
    for (int i=1;i<=T;i++)
    {
        if(i!=1)
            cout<<endl;

        cin>>n>>t>>m;
         int a[m];
    int dep[m];
        for (int j=0;j<m;j++)
        {
            string s;
            int p;
            cin>>p>>s;
            if(s=="left")
                q[0].push(j);
            else
                q[1].push(j);
            a[j]=p;

        }
        int curt=0;
        int side=0;
        //0==left
        //1==right
        while(!q[0].empty() || !q[1].empty())
        {
            int nexttime;
            if(q[0].empty())
                nexttime=a[q[1].front()];
            else if(q[1].empty())
                nexttime=a[q[0].front()];
            else
                nexttime=min(a[q[0].front()],a[q[1].front()]);

          if(curt<nexttime)
               curt=curt+(nexttime-curt);
          int cop=0;
          //cout<<q[side].empty()<<" "<< a[q[side].front()]<<endl;
          while(!q[side].empty() && cop<n && curt>=a[q[side].front()])
          {
              dep[q[side].front()]=curt+t;
             // printf("dhuksi\n");
              //cout<<curt+t<<endl;
              //curt+=t;
              q[side].pop();
              cop++;

          }
          curt+=t;
          side^=1;
        }
         for (int st=0;st<m;st++)
          {
              cout<<dep[st]<<endl;
          }

        }

    }


