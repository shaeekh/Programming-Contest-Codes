#include<bits/stdc++.h>
using namespace std;
/*void sievet(int n)
{
    bool prime[n+1];
    for (int i=3; i*i<=n;i++)
    {
        if(prime[i])
            for (int j=i*i;j<=n;j+=i*2)
        {
            prime[i]=false;

        }
    }
    for (int p=3;p<=n;p+=2)
    {
        if (prime[p])
            cout<<p<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    sievet(n);
}
*/
void sieve(int n)
{
    bool prime[n+1];
    for (int i=3;i*i<=n;i++)
    {
        if (prime[i])
        {
            for (int j=i*i;j<=n;j++)
            {
                prime[i]=false;
            }
        }
    }
}
