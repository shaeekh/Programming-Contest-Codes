
#include<bits/stdc++.h>
using namespace std;
int gcd(long long int a,long long int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int t;
    scanf("%d",&t);
    for (int j=1;j<=t;j++)
    {
        long long int a,b;
         scanf("%lld %lld",&a,&b);
         int g=gcd(a,b);
          int d=0;
        for (int i=1;i<=sqrt(g);i++)
    {
        if (g%i==0)
            d=d+2;

    //i=i-1;

        if(i*i==g)

            d--;
    }
        //printf("%d\n",c);
 printf("%d\n",d);
}

}
