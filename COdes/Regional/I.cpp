#include<bits/stdc++.h>
using namespace std;
int bigmod(long long int b,long long int p,long long int m)
{
   if(p==0)
    return 1;
   if (p%2==0)
   {
       int y=bigmod(b,p/2,m);
        return (y*y)%m;
   }
   else
   {
       return ((b%m)*bigmod(b,p-1,m))%m;
   }

    }
int main()
{
    long long int b,p,m;
    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF)
    {


    int result=bigmod(b,p,m);
    cout<<result<<endl;
}
}
