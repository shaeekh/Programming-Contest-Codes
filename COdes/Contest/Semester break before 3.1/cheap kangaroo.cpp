#include<bits/stdc++.h>
typedef long long int   ll;
using namespace std;
ll gcd(ll a, ll b)
{
    if(b==0)
        return a;

    else
        return gcd(b,a%b);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll  n;
        scanf("%lld",&n);
        long long int a[n];
        long long int sum=0;
        for (long long int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            sum+=a[i];
        }
        ll get=a[0];
        for (int i=0;i<n;i++)
        {
            get=gcd(a[i],get);





        }
        cout<<sum<<" "<<get<<endl;

    }
}
