#include<bits/stdc++.h>
using namespace std;
int dp[20][20];
memset(dp,-1,sizeof(dp));

int re(int n,int r)
{
    if(n==r)
        return 1;
    if(r==1)
        return n;
    if(dp[n][r]!=-1)
        return dp[n][r];
    else
    return  dP[n][r]=DP(n-1,r)+DP(n-1,r-1);

}
int main()
{

}
