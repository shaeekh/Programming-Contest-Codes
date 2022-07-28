#include<bits/stdc++.h>
using namespace std;
#define maxi 34
//int dp[maxi][maxi];
double calculate(double  ne,double di)
{
    return pow(ne,di);


}
int main()
{
    double ne,di;
    while(cin>>ne>>di)
    {
        if(ne==0 && di==0)
            return 0;
      //  memset(dp,-1,sizeof(dp));
        double get=calculate(ne,di);
        cout<<get<<endl;

    }
    return 0;

}
