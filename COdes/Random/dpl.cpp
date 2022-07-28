#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int n,m,q;
        cin>>n>>m>>q;
        int gm[n];
        for (int j=0;j<n;j++)
            cin>>gm[j];
      //  sort(gm,gm+n);
        int sum=0;
       int finc=0;
     //   int mcoun;
        for (int j=0;j<n;j++)
        {
                sum+=gm[j];
            if(sum>=q || finc>m)
                break;

                finc++;

        }
        printf("Case %d: %d\n",i,finc);
    }
}
