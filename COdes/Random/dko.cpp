#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    for (long long int i=1;i<=t;i++)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
       // cout<<a<<b;
        printf("Case %lld: %lld\n",i,(a*b)/2);

    }
}
