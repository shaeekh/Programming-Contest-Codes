#include<bits/stdc++.h>
using namespace std;
long long int phi(long long int n)
{
long long     int result=n;
     if (n%2==0)
        {
            while (n%2==0)
            {
                n=n/2;
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


    for (int i=5;i*i<=n;i=i+6)
    {
        if (n%i==0)
        {
            while (n%i==0)
            {
                n=n/i;
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
    if (n>1)
    {
        result=result-(result/n);
    }
    return result;
}
int main()
{
    for (; ; )
    {



    long long int n;
    scanf("%lld", &n);
        if (n==0)
        return 0;
   long long  int r=phi(n);
    printf("%lld\n", r);

}
}
