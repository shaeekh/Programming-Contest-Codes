#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;


    long long int n1=max(m,n-m);
   long long  int n2=min(m,n-m);

    //long long int res=1;
    double an2=0;
    for (long long int i=n1+1;i<=n;i++)
    {
        an2+=log10(i);
    }
    for (long long int i=1;i<=n2;i++)
    {
        an2-=log10(i);
    }


    //cout<<res<<endl;
    int co=(int)(floor(an2)+1);
    cout<<co<<endl;
}
return 0;
}
