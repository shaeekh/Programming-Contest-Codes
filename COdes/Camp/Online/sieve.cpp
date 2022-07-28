#include <bits/stdc++.h>
using namespace std;

long long int  sievetest(long long int m,long long int n)

{
    bool prime[n+1];
  for (long long int i=2;i<=n;i++)

       {
           prime[i]=true;
       }
     long long int st;
     if(m%2==0)
         st=m+1;
     else
        st=m;

        if(st==1)
            st=3;
//cout<<st<<endl;
   //}
   //The previous loop is not needed because at first all the element is true rather try this
    for (long long int p=st;p*p<=n;p=p+2)
        //jehutu sqrt(n) er moddhei shob devisor ase
        //sqrt(n) use na kore p*p<=n use korlam karon
        //sqrt(n) time beshi khai

    {
        //printf("p\n");
        if (prime[p]==true)
        {
            for (long long int i=p*p;i<=n;i+=2*p)//(p+p) korle shudhu bijor shongkha pabo

            //bijor+bijor=jor
            //bijor+jor=bijor
            {


                prime[i]=false;
            }
        }
    }
  //  cout<<"2"<<endl;
 long long int sum=0;
    for (long long int p=st;p<=n;p+=2)
    {
        if (prime[p])
           // cout<<p<<endl;
          // cout<<prime[p]<<endl;
          // printf("ebong\n");
           //cout<<p<<endl;
           sum=sum+p;
    }
    if(m<=2)
    return sum+2;
    else
        return sum;

}

int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {


   long long  int a,b;

    cin>>a>>b;

    long long int re=sievetest(a,b);
    cout<<re<<endl;


}
}

