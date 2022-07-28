#include <bits/stdc++.h>
using namespace std;

long long int result(long long int n,long long int k)
{
    long long int p=k-1;
   // if (n-p>p)
     //   p=n-p;
        long long int res=1;
    long long int N=n-p;


    for (int i=0;i<p;i++)
    {
        res=res*(N+i);
        res=res/(i+1);




    }
   // cout<<N<<endl;

    return res;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long int n,k;
        scanf("%lld %lld",&n,&k);
       long long int fin=result(n,k);
       cout<<fin<<endl;

    }
}

