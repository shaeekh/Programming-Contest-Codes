#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];


    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int level[n+1];
    int fuel[n+1];
    int cost[n+1];
    for (int i=1;i<=m;i++)
    {
        int le,fu,co;
        cin>>le>>fu>>co;


            level[le]=1;
            fuel[le]=fu;
            co[le]=co;

    }
    int totalfuel=0;
    int totalcost=0;
    int position;
    int sum1=0;
    for (int i=1;i<=n;i++)
    {
        if(totalfuel>=a[i])
        {
            for (int j=i; ;j++)
            {
                if(level[j]==1)
                {
                    position=j;
                    break;
                }

            }
            for (int j=i;j<=position ; j++)
            {
                sum1+=a[j];
                if(sum1>totalfuel)
                    cout<<"-1"<endl;
                else
                {

                }

            }




        if(level[i]==1)
        {
            totalfuel+=fuel[i];
            totalcost+=cost[i];



        }
        totalfuel-=a[i];
        if(total)



    }



    }

}
