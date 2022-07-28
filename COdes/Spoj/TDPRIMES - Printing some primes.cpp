#include <bits/stdc++.h>
using namespace std;
#define n 100000000
int ar[100000007];

    bool prime[n+1];

void sievetest()

{
   for (int i=2;i<=n;i++)
   {
      prime[i]=false;
   }

   //The previous loop is not needed because at first all the element is true rather try this
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
            }
        }
    }
    //cout<<"2"<<endl;
    //for (int p=3;p<=n;p+=2)
    //{
//     /   if (prime[p])
      //      cout<<p<<endl;
    //}

}

int main()
{
   //long long  int n;
    //printf("Tell me the number \n");
    //cin>>n;
    //printf("Prime numbers within these range\n");
    sievetest();
    printf("2\n");
    int j=1;
    int c=0;
    for (int i=3;i<=1e8;i+=2)
    {
        if(prime[i])
            c++;
        if(c==100*j)
        {
            j++;
            printf("%d\n",i);
        }
    }


}
