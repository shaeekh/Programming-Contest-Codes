#include <bits/stdc++.h>
using namespace std;
int bigmod(long long int n,int p,int m)
{
    if (p==0)
        return 1;
    if (p%2!=0)
    {
        return ((n%m)*bigmod(n,p-1,m)%m);
    }
    else
    {


        long long a=bigmod(n,p/2,m);
    return (a*a)%m;
}
}
int main()
{
    long long  int  n;
    cin>>n;
    int p,m;
    cin>>p>>m;
    int result=bigmod(n,p,m);
    cout<<result<<endl;


}
