#include<bits/stdc++.h>
using namespace std;
int a[10000];
long long int fib(int n)
{
    a[0]=0;
    a[1]=1;
    for (long long int i=2;i<-n;i++)
    {
        a[i]=a[i-1]+a[i-2];

    }
    return a[n];
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    for (int i=1;i<=t;i++)
    {


    long long int n;
    scanf("%lld",&n);
    n=n-1;
    long long p=(fib(n))%(1000000000+7);
    printf("%lld\n",p);
}
}

