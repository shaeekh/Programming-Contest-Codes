#include <bits/stdc++.h>
using namespace std;

long long int  sievetest(long long int n)

{
    long long int result=n;
    bool prime[n+1];
   for (int i=2;i<=n;i++)
   {
       prime[i]=true;

   }
    for (int p=3;p<=sqrt(n);p=p+2)
    {
        if (prime[p]==true)
        {
            for (int i=p*3;i<=n;i+=2*p)
                prime[i]=false;
        }
    }
    if (n%2==0)
    {
              while(n%2==0)
            {n=n/2;
            }

              result=result-(result/2);
            }
            if (n%3==0)
        {
            while (n%3==0)
            {
                n=n/3;
            }
            result=result-(result/3);
        }

        for (int i=5;i*i<=n;i+=6)
    {
        if (prime[i])
        {
              if (n%i==0)
        {
            while(n%i==0)
            {n=n/i;
            }
            result=result-(result/i);
        }
        if (n%(i+2)==0)
        {
            while (n%(i+2)==0)
            {
                n=n/(i+2);
            }
            result=result-(result/(i+2));
        }

        }
    }
    if (n>1)
    {
          result=result-(result/n);

    }
    return result;
}
int main()
{
    for ( ; ;)
    {
        //if ()
        long long int n;
        scanf("%lld", &n);
        if (n==0)
            return 0;
        long long int r= sievetest(n);
        printf("%lld\n", r);
}
}
