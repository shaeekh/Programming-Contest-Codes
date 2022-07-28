#include<bits/stdc++.h>
using namespace std;
int primefact(long long int n)
{
   int ans=0;
    for (int i=2;i<=sqrt(n);i++)
    {
         int count=0;

        if (n%i==0)
        {
            while(n%i==0)
             {
                 n/=i;
                 count++;
                //8 printf("%d %d\n", n , i);
             }
        }
             if(ans<count)
         ans=count;
    }
   return ans;
//    return count;
}

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {


    long long int n;
    scanf("%lld",&n);
     // cout<<(int)sqrt(50)<<endl;
    int a=primefact(n);
    if(a==0 && n!=1)
       printf("%d\n",a+1);
    else
    printf("%d\n",a);
}
}


