#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,r;
    while(cin>>n>>r)
    {
        if(n==0 && r==0)
            break;


    if(n-r<r)
        r=n-r;
      long long int res=1;
    for (int i=1;i<=r;i++)
    {
        res=res*n;
        res=res/i;
        n--;

    }
    cout<<res<<endl;
    }
    return 0;
}
