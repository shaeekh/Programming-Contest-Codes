#include<bits/stdc++.h>
using namespace std;
long long int fib(long long int n)
{
  long long int a = 1, b = 0, temp;

  while (n > 0){
    temp = a;
    a = a + b;
    b = temp;
    n--;
  }

  return b;
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
    printf("%lld\n",fib(n));
}
}
