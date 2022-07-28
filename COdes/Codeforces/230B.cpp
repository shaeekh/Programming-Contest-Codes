#include<bits/stdc++.h>
using namespace std;
bool prime[300000];
void sievetest()

{
   // bool prime[n+1];
int n=300000;
   for (int i=2;i<=n;i++)
   {
       prime[i]=true;

   }

   prime[2]==true;
  // prime[7]==true;
    for (int p=3;p<=sqrt(n)+1;p=p+2)
    {

        if (prime[p]==true)
        {
            for (int i=p*p;i<=n;i+=2*p)
                prime[i]=false;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
          long long int n;
          int count=0;
          cin>>n;
         // bool prime[n+1];
          sievetest();


          int p=sqrt(n);
          //cout<<p<<endl;
          //int flag=0;
          if (p*p==n)
          {
            //  flag=1;
              //cout<<flag<<endl;


          if (prime[p]==true)
          {
           //count=1;
           //cout<<count<<endl;
          cout<<"YES"<<endl;
          }

          else
            cout<<"NO"<<endl;
          }

          else
          {
           //count=1;
           //cout<<count<<endl;

            cout<<"NO"<<endl;
          }

//cout<<flag<<endl;
}
}

