#include<bits/stdc++.h>
using namespace std;
long long int m=1000003;
long long int f[1000005];
long long int bigmod(long long n,long long int p)
{
    //n to the power p%m
    if (p==0)
        return 1;
    else if (p%2==0)
    {
        long long int y=bigmod(n,(p/2));
        //printf("even er p/2 holo %d\n", p/2);
      long long   int q= (y*y)%m;
       // cout<<q<<endl;
        return q;
    }
    else
    {
       //printf("odd er p-1 holo %d\n", p-1);
       long long  int qs= (n*bigmod(n,p-1))%m;
        //cout<<qs<<endl;
        return qs;

    }
}

int main()
{
    f[1]=1;
    for (long long int i=2;i<=1000002;i++)
    {
        f[i]=(i*f[i-1])%m;
        //cout<<"f[i] "<<f[i]<<endl;


    }
    int t;
    cin>>t;
    int co=0;
    while(t--)
    {


    long long int n,r;

    scanf("%lld %lld",&n,&r);
        long long int k=r; // ei line hudai likhsi , pore bhule r er jaigai k disi tai ..thik korte alshemi lagtese
        if(n==0 && r==0)
            break;


  //if(k>n)
    printf("Case %d: ",++co);
     if(k>n)
        printf("0\n");
     else if (k==n)
        printf("1\n");
     else if(k==0)
        printf("1\n");
        else
        {
            long long int below=(f[n-r]*f[r])%m;
            long long int up=f[n];
            long long int res=(f[n]*bigmod(below,m-2))%m;
            printf("%lld\n",res);
        }
    }
    }
    //return 0;

