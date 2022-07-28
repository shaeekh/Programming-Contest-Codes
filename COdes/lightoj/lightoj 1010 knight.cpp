#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int t;
    scanf("%lld",&t);
    for (long long int i=1;i<=t;i++ )
    {
        long long int res=0;
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==1 || m==1)
        {
             res=max(n,m);

            //continue;
        }
        else if(n==2 || m==2)
        {
            res=max(n,m);
            if(res%4==0)
               res=res;
             else if(res%4==1 || res%4==3)
             {
             res=res+1;
             }
             else
               res=res+2;
             //continue;
        }
        else
        {
           long long  int ar=n*m;
           if(ar%2==0)
            res=ar/2;
            else
               res=(ar/2)+1;
               // continue;
        }
         printf("Case %lld: %lld\n",i,res);

    }
    return 0;
}
