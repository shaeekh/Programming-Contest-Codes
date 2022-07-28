#include<bits/stdc++.h>
using namespace std;
//long long int m= 1000000007;
long long int m= 1000000007;
long long int f[2000010];
long long int bigmod(long long int  n,long long int p)
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
    //freopen ("lj.txt","w",stdout);
    f[0]=1;
    for (long long int i=1;i<=2000010;i++)
    {
        f[i]=(i*(f[i-1]))%m;
        //cout<<"f[i] "<<f[i]<<endl;


    }
    int t;
    scanf("%d",&t);
    int co=0;
    while(t--)
    {


    long long int n,r;

    scanf("%lld %lld",&n,&r);

       // r=r-1;
        //n=n+r;
        printf("Case %d: ",++co);


//cout<<n<<" "<<r<<endl;
  //if(k>n)

     /*if(r>n)
        printf("0\n");
     else if (r==n)
        printf("1\n");
     else if(r==0)
        printf("1\n");
        */

            long long int below=((f[n])*(f[r-1]))%m;
           long long int get= bigmod(below,m-2);
            long long int ip=f[n+(r-1)];
            long long int res=((ip)*(get))%m;
            printf("%lld\n",res);


    }
}

    //return 0;


