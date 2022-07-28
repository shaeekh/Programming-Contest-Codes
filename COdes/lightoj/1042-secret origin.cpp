#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//#define  push_back pb
int main()
{
    int t;
    scanf("%d",&t);
    int co=0;
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        vector<ll> v;

        while(n!=0)
        {
            int  res=n%2;
            v.push_back(res);
            n/=2;


        }

        v.push_back(0);
        reverse(v.begin(),v.end());
        next_permutation(v.begin(),v.end());
        int ex=0;
        ll l=v.size();
        ll dec=0;
        for (long long int i=l-1;i>=0;i--)
        {
            if(v[i]!=0)
            {dec += (long long int )pow(2,ex);


            //cout<<"ex is "<<ex<<endl;
            }
            ex++;


        }
        printf("Case %d: %lld\n",++co,dec);


    }
}
