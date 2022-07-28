#include<bits/stdc++.h>
using namespace std;
#define mx 10e6+7
int prime[100000];
void sieve(int n )
{
//    int n;
    prime[0]=1;
    prime[1]=1;
    for (int i=4;i<=n;i+=2)
        prime[i]=1;
    for (int i=3;i*i<=n;i+=2)
    {
        if(prime[i]==0)
        {
            for (int j=i*i;j<=n;j=j+2*i)
                prime[j]=1;
        }
    }
    cout<<"2"<<endl;
    for (int p=3;p<=n;p+=2)
    {
        if (prime[p]==0)
            cout<<p<<endl;
    }

}


int main()
{
    int n;
    cin>>n;
    sieve(n);


}
