#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);

}
int main()
{
    long long int t;
    cin>>t;
    for (long long int i=1;i<=t;i++)
    {
        long long int a,b;
        cin>>a>>b;
        long long int res=gcd(a,b);
        if(res==1)
        printf("Nao\n");
        else
            printf("Sim\n");

    }
}
