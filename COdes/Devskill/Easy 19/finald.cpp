//#define ONLINE_JUDGE 1
#include <bits/stdc++.h>
using namespace std;
#define n 2140
vector<long long int> pri;
   bool prime[n+1];

void sievetest()

{

  for (long long int i=2;i<=n;i++)
   {
      prime[i]=true;

   }
   for (long long int i=4;i<=n;i+=2)
    prime[i]=false;

    for (long long int p=3;p*p<=n;p=p+2)
        //jehutu sqrt(n) er moddhei shob devisor ase
        //sqrt(n) use na kore p*p<=n use korlam karon
        //sqrt(n) time beshi khai

    {
       // printf("2\n");
        if (prime[p]==true)
        {
            for (int i=p*p;i<=n;i+=p)//(p+p) korle shudhu bijor shongkha pabo

            //bijor+bijor=jor
            //bijor+jor=bijor
            {


                prime[i]=false;
               // cout<<"ei je "<<i<<endl;
            }
        }
    }
    pri.push_back(2);
    for (int p=3;p<=n;p+=2)
    {
        if (prime[p])
            pri.push_back(p);
    }


}
int main()
{
    memset(prime,false,sizeof(prime));
    //freopen("redit.txt", "w", stdout);
    sievetest();
   // ofstream outFile("myfile.txt", ios::out);

   // cout<<"eikhane main "<<endl;

    long long int t;
    scanf("%lld",&t);
    int co=0;
    while(t--)
    {
      long long   int n2;
    scanf("%lld",&n2);

    //n2=pri[n2];
    //cout<<"ei dekho "<<n2<<endl;
    //n2++;

    printf("Caso %d -> ",++co);
    if(n2==1)
        cout<<"2 3"<<endl;
    else


    {





    for (int i=0;i<n2;i++)
    {
        //cout<<"now i is "<<i<<endl;
        if(i==(n2-1))
            {cout<<pri[i]<<endl;

            }
        else
            cout<<pri[i]<<" ";
    }
    }
    }
    }



