#include<bits/stdc++.h>
using namespace std;
double ar[1000005]={0};
int main()
{
 for(int i=1;i<=1000002;i++)
    {
        ar[i]=ar[i-1]+log(double(i));
    }

    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {
  int n,m;
        scanf("%d %d",&n,&m);
        //cout<<ar[]<<endl;
        //cout<<ar[5]<<endl;
        //cout<<log(m)<<endl;
        double ans=ar[n];
        ans/=log(double(m));
       // cout<<log(double(m));
      //  ans=floor(ans);
        long long int  res=ans+1;
        printf("Case %d: %lld\n",i,res);
    }
}
