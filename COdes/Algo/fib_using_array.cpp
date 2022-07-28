#include<bits/stdc++.h>
using namespace std;
int a[10000];
int fib(int n)
{
    a[0]=0;
    a[1]=1;
    for (int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];

    }
    return a[n];
}
int main()
{
    int n;

    int t=20;
    for (int i=1;i<=t;i++)

    {
         cin>>n;
        int d=fib(n);
    cout<<d<<endl;
    }

}
