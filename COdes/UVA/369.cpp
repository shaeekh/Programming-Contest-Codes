#include<bits/stdc++.h>
using namespace std;
long long int dp[133][133];

long long int calc(long long int n,long long int r)
{
    if(r==1)
        return n;
    if(n==r)
        return 1;

    if(dp[n][r]!=-1)
        return dp[n][r];
    else
        {
            dp[n][r]=calc(n-1,r)+calc(n-1,r-1);

            return dp[n][r];



        }


}
int main()
{
    long long int n,r;
    while(cin>>n>>r)
    {
        if(n==0 && r==0)
            break;
        memset(dp,-1,sizeof(dp));
        long long int get=calc(n,r);
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,get);
}
return 0;
}
