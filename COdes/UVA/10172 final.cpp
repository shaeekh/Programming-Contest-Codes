#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for (int gulu=1;gulu<=t;gulu++)
    {
        stack<int> cargo;
        //queue<int> stationB;
        int n,s,q;
        cin>>n>>s>>q;
            queue<int> stationB[1000];
        for (int i=0;i<n;i++)
        {
            int tot;
            cin>>tot;
            for (int j=0;j<tot;j++ )
                {
                    int dif;
                    cin>>dif;
                    stationB[i].push(dif-1);
                }
        }
        int time=0;
        int curpos=0;
        while(1)
        {
            while((!cargo.empty()) && (cargo.top()==curpos || stationB[curpos].size()<q))
            {
                if(cargo.top()!=curpos)
                {
                    stationB[curpos].push(cargo.top());
                }
                cargo.pop();
            time++;
            }
            while(!stationB[curpos].empty() && (cargo.size()<s))
            {
                cargo.push(stationB[curpos].front());
                stationB[curpos].pop();
                time++;

            }
            bool t=cargo.empty();
            for (int i=0;i<n;i++)
            {
                t&=stationB[i].empty();
            }
            if(t)
                break;
                curpos=(curpos+1)%n;
                time=time+2;
             //   printf("bh;p\n");

        }
        cout<<time<<endl;
    }
    }
