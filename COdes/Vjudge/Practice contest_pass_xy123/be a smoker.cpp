#include<bits/stdc++.h>
using namespace std;
long long int bigmod(long long n,long long int p,int m)
{
    if (p==0)
        return 1;
    else if (p%2==0)
    {
        int y=bigmod(n,(p/2),m);
        //printf("even er p/2 holo %d\n", p/2);
        int q= (y*y)%m;
       // cout<<q<<endl;
        return q;
    }
    else
    {
       //printf("odd er p-1 holo %d\n", p-1);
        int qs= ((n%m)*bigmod(n,p-1,m))%m;
        //cout<<qs<<endl;
        //return qs;

    }
}

int main()
{
   long long int n,p;
   scanf("%lld",&p);
   n=(34^p)+(30*p)+32;
   bigmod(n,p,11);


    cout<<bigmod(n,p,11);


}
