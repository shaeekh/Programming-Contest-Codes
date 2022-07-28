#include <iostream>
using namespace std;
long long int lc[1000014];
long long gcd(long long int a, long long int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

long long lcm(long long a,long long b){
    if(a>b)
        return (a/gcd(a,b))*b;
    else
        return (b/gcd(a,b))*a;
}


int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
       // lc[1]=n;
        long long int sum=0;
        for (long long int i=2;i<=n;i++)
        {

                sum+=lcm(i,n);
                //printf("lcm in odd is %lld\n",lcm(i,n));



        }
        cout<<sum+n<<endl;
    }
}
