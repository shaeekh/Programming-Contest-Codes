#include<bits/stdc++.h>
using namespace std;
long long int ncr(int n,int r)
{
    if(n-r<r)
        r=n-r;
      long long int res=1;
    for (int i=1;i<=r;i++)
    {
        res=res*n;
        res=res/i;
        n--;

    }
    return res;


}
int main()
{
    int n,m,t;
    cin>>n>>m>>t;
    long long int sum=0;
    for (int i=4,j=1;i<=n,j<=m;i++,j++)
    {
        if(i+j==t)
        {
          //  cout<<"ni "<<ncr(n,i)<<endl;
            //cout<<"mj "<<ncr(m,j)<<endl;
            sum=sum+(ncr(n,i)*(ncr(m,j)));

        }


    }
    cout<<sum<<endl;


}
