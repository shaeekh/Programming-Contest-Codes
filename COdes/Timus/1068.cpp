#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int sum=0;
    if (n<0)
    for (int i=1;i>=n;i--)
    {
        sum=sum+i;
    }
    if (n>0)
        for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum<<endl;
}
