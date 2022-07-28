#include <bits/stdc++.h>
using namespace std;

void sievetest(int m)

{
    int n=1000;
    bool prime[n];
   for (int i=2;i<=n;i++)
   {
       prime[i]=true;

   }
    for (int p=3;p<=sqrt(n);p=p+2)
    {
        if (prime[p]==true)
        {
            for (int i=p*3;i<=n;i+=2*p)
                prime[i]=false;
        }
    }
    int count=0;
    int current=3;
    for (int i=5;i<=n;i+=2)
   {
       if (prime[i])
       {
           if(i-current==2)
   {
    count++;
    current=i;
   }
           if (count==n)
           {
               printf("(%d, %d)\n", current,i);
               break;
           }
            else
            continue;
       }
   }
cout<<count<<endl;
   }
//cout<<count<<endl;

int main()
{
    int n;
    cin>>n;
    sievetest(n);

}
