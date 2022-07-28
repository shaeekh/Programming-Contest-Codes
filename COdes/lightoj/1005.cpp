#include<bits/stdc++.h>
using namespace std;
#define maxi 60
long long int dp[maxi][maxi];

long long int npr(long long int n, long long int r)
{
    long long int ans=1;
    for (int i=n;i>=n-r+1;i--)
    {
        ans=ans*i;

    }
    return ans;
}
long long int ncr(long long int n, long long int r)
{
    if(r==0)
        return 1;
    if(n==r)
        return 1;
    if(dp[n][r]!=-1)
        return dp[n][r];
    else
        return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);

}

int main()
{
    int t;
    cin>>t;
    int co=0;

    while(t--)
    {
        memset(dp,-1,sizeof(dp));

        long long int n,k;
        cin>>n>>k;
        printf("Case %d: ",++co);
        if(k>n)
        {
            cout<<"0"<<endl;
        }
        else
        {


        long long int get=ncr(n,k);
        //cout<<get<<endl;
        long long int get2=npr(n,k);
        cout<<get*get2<<endl;
        }
    }
}





