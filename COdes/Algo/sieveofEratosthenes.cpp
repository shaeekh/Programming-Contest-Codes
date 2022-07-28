#include <bits/stdc++.h>
using namespace std;

void sievetest(long long int n)

{
    bool prime[n+1];
  for (int i=2;i<=n;i++)
   {
      prime[i]=true;

   }
   for (int i=4;i<=n;i+=2)
    prime[i]=false;

    for (int p=3;p*p<=n;p=p+2)
        //jehutu sqrt(n) er moddhei shob devisor ase
        //sqrt(n) use na kore p*p<=n use korlam karon
        //sqrt(n) time beshi khai

    {
       // printf("2\n");
        if (prime[p]==true)
        {
            for (int i=p*p;i<=n;i+=2*p)//(p+p) korle shudhu bijor shongkha pabo

            //bijor+bijor=jor
            //bijor+jor=bijor
            {


                prime[i]=false;
               // cout<<"ei je "<<i<<endl;
            }
        }
    }
    cout<<"2"<<endl;
    for (int p=3;p<=n;p+=2)
    {
        if (prime[p])
            cout<<p<<endl;
    }


}

int main()
{
   long long  int n;
    printf("Tell me the number \n");
    cin>>n;
    printf("Prime numbers within these range\n");
    sievetest(n);


}
