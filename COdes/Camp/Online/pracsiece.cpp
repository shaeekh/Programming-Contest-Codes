#include<bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    bool prime[n+1]
    for (int i=2;i<=n;i)
        prime[i]=true;
    for (int i=3;i*i<=n;i++)
    {
        if(prime[i])
        {
            for (int j=i*i;j<=n;j+=2i)
            {
                prime[i]=false
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
}
