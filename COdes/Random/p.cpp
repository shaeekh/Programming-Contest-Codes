#include<bits/stdc++.h>
using namespace std;
#define N 100000
 bool prime[N+1];

void sieve()
{ //bool prime[N+1];

    prime[0]=false;
    prime[1]=false;

    for (int i=2;i<=N;i++)
    {
        prime[i]=true;
    }
    for (int i=2;i<=sqrt(N);i++)
    {
        if (prime[i])
        for (int j=i*i;j<=N;j=j+i+i)
        prime[j]=false;
    }
    prime[2]=false;
}
int main()

{
    sieve();
    int n,k;
    cin>>n,k;
    int co=0;

    int j=0;
        for (int i=3;i<=n;i+=2)
    {
        if (prime[i])
        {
            ab[j]=i;
            j++;
        }
    }
    for (int p=1;p<n;p++)
    {
        if(ab[p]-ab[p-1]==1)
            co++;
    }


//cout<<k<<endl;
if(co==k)
        printf("YES\n");
   else
    printf("NO\n");
}
