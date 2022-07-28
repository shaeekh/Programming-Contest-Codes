#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int l,m;

   // string s;
    queue<int> q[2];
    for (int i=1;i<=T;i++)
    {

        cin>>l>>m;
        l=l*100;
         //int a[m];
    //int dep[m];
        for (int j=0;j<m;j++)
        {
            string s;
            int p;
            cin>>p>>s;
            if(s=="left")
                q[0].push(p);
            else
                q[1].push(p);
           // a[j]=p;

        }
       // for (int j=0;j<m;j++)
         //   cout<<a[j]<<endl;

        int sch=0;
        int side=0;

        while(!q[0].empty() || !q[1].empty())
        {
          int cop=0;
sch++;

          //cout<<q[side].empty()<<" "<< a[q[side].front()]<<endl;
        while(!q[side].empty() && cop+q[side].front()<=l )
          {
             // printf("dd\n");
             // printf("dhuksi\n");
              //cout<<curt+t<<endl;
              //curt+=t;


              cop=cop+q[side].front();
              q[side].pop();






          }

          side^=1;
        }
         cout<<sch<<endl;

        }

    }



