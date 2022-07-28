#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
  //  printf("T %d\n",t);
    for (int i=1;i<=t;i++)
    {
        int n,m,q;
        cin>>n>>m>>q;
    //    printf("n,m,q nea shesh\n");
        int gm[n];
           int sum=0;
       int finc=0;
     //   int mcoun;
        for (int j=0;j<n;j++)
          {
        //      cout<<"j "<<j<<endl;

            cin>>gm[j];
      //      printf("gm[j] nilam\n");
      //  sort(gm,gm+n);


        //for (int j=0;j<n;j++)
        //{
                sum+=gm[j];
       if(finc<m && sum<=q)
        //finc++;

finc++;

        }
        printf("Case %d: %d\n",i,finc);
    }
}
