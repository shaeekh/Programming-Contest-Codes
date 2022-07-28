#include<bits/stdc++.h>
using namespace std;
long long int dp[305][305];
    long long int ad[305][305];

   long long int n;
long long int cal(long long int i,long long int j)
{
   // printf("func\n");
    if(i>=(2*n))
    return 0;
    if(j<0)
        return 0;
    //if(i<1)
      //  return 0;
    if(ad[i][j]==0)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    //printf("returned not\n");
    long long int wow=ad[i][j];
    if(i<n)
    {
        wow+=max(cal(i+1,j+1),cal(i+1,j));
    }
        else
        {
            wow+=max(cal(i+1,j),cal(i+1,j-1));
        }
        dp[i][j]=wow;
       // cout<<dp[i][j]<<endl;
        return dp[i][j];

}


int main()
{
    int t;
    scanf("%d",&t);
    int co=0;
    while(t--)
    {
         memset(dp,-1,sizeof(dp));
        //long long int n;
        scanf("%lld",&n);
        //cout<<"n is "<<n<<endl;

       memset(ad,0,sizeof(ad));
        long long int jmax;
        for (long long int i=0;i<=(2*n)-1;i++)
        {
            if(i<n)
                jmax=i;
            else
            jmax=(2*n)-i;
            //cout<<"jmax is "<<jmax<<endl;
            for (long long int j=0;j<jmax;j++)

            {
              //  printf("Dhukse\n"); 2
                scanf("%lld",&ad[i][j]);
                //cout<<"i and j and elem "<<i<<" "<<j<<" "<<ad[i][j]<<endl;

            }

        }

       // cout<<ad[1][0]<<endl;


    long long int result=cal(1,0);

    printf("Case %d: %lld\n",++co,result);
    //cout<<ad[1][1];
   }

}
