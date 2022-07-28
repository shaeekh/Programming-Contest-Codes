#include<bits/stdc++.h>
using namespace std;
long long int bigmod(long long n,int p,int m)
{
    //n to the power p%m
    if (p==0)
        return 1;
    else if (p%2==0)
    {
        int y=bigmod(n,(p/2),m);
        //printf("even er p/2 holo %d\n", p/2);
       long long  int q= (y*y)%m;
       // cout<<q<<endl;
        return q;
    }
    else
    {
       //printf("odd er p-1 holo %d\n", p-1);
       long long  int qs= (n*bigmod(n,p-1,m))%m;
        //cout<<qs<<endl;
        return qs;

    }
}

int main()
{
    int n,p,m;

    cin>>n>>p>>m;

    cout<<bigmod(n,p,m);


}
