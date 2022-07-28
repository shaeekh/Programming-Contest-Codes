#include<bits/stdc++.h>
using namespace std;
#define N 1000000
   bool prime[N+1];
void sieve()
{
    prime[0]=false;
    prime[1]=false;

    for (int i=2;i<=N;i++)
    {
        prime[i]=true;
    }
    for (int i=2;i<=sqrt(N);i++)
    {
        if (prime[i])
        for (int j=i*i;j<=N;j=j+i)
        prime[j]=false;
    }
    prime[2]=false;
}
int main()

{
        sieve();
    int n;
    for (; ;)
    {


    scanf("%d", &n);
    if (n==0)
        break;

    for (int i=3;i<n;i+=2)
    {
        if (prime[i])
        {

        if( prime[n-i])
{



     printf("%d = %d + %d\n", n, i, n-i);
     break;

    }

}
    }
}
}

