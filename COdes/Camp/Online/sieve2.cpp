#include <bits/stdc++.h>
using namespace std;

int   sievetest(long long int n)

{
    long long int prime[n+1];
   for (long long int i=2;i<=n;i++)
   {
      prime[i]=1;

   }
   //The previous loop is not needed because at first all the element is true rather try this
    for (long long int p=3;p*p<=n;p=p+2)
        //jehutu sqrt(n) er moddhei shob devisor ase
        //sqrt(n) use na kore p*p<=n use korlam karon
        //sqrt(n) time beshi khai

    {
       // printf("2\n");
        if (prime[p]==1)
        {
            for (long long int i=p*p;i<=n;i+=2*p)//(p+p) korle shudhu bijor shongkha pabo

            //bijor+bijor=jor
            //bijor+jor=bijor
            {


                prime[i]=0;
            }
        }
    }
prime[2]=1;
return prime[n];
}

int main()
{
    //bool test[1000000]={0};
//    cout<<test[4];
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {


   long long  int n;
  //  printf("Tell me the number \n");
    cin>>n;
    //printf("Prime numbers within these range\n");
    int valid=sievetest(n);
    if(valid==1)
        printf("%d is a prime\n",n);
        else
        printf("%d is not a prime\n",n);


}

}
