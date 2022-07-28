#include<bits/stdc++.h>
using namespace std;
#define N 1000005
void seive(int n)
{
    bool prime[N+1];
    for (int i=2;i<=N;i++)
    {
        prime[i]=true;
    }
    for (int i=2;i<=sqrt(N);i++)
    {
        if (prime[i])
        for (int j=2;i*i<=N;j++)
        prime[i*j]=false;
    }
    prime[2]=false;
}
int main()

{
    int n;
    scanf("%d", &n);
    seive(n);
    for (int i=3;i<n;i++)
    {
        if (prime[i] && prime[n-i])


     printf("%d = %d + %d\n", n, i, n-i);

    }

}
