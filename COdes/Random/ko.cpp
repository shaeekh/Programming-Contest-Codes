#include<bits/stdc++.h>
using namespace std;
struct data
{
   int x;
    int y;
};
bool comp(data a,data b)
{
    if(a.x==b.x)
        return a.y>b.y;
    else
        return a.x<b.x;

}
int main()
{
        data ans[1000];

    for (int i=0;i<1000;i++)
    {
        int co=0;

        for (int j=1;j<=sqrt(i);j++)
        {
            if((i+1)%j==0 && (i/j!=j))
                {
                    co=co+2;
                }
          else if ((i+1)%j==0)
               co++;

        }
        ans[i].y=i+1;
        ans[i].x=co;
        //cout<<i<<" "<<co<<endl;
    }
    sort(ans,ans+1000,comp);
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int m;
        cin>>m;
        printf("Case %d: %d\n",i,ans[m-1].y);
    }


}


