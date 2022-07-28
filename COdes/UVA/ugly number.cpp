#include<bits/stdc++.h>
using namespace std;

bool prime_fact(long long  int n)

{
    while(n%2==0)
    {
         n=n/2;

    }
    while(n%3==0)
        { n=n/3;
        }
    while (n%5==0)
        {
            n=n/5;
        }

        printf("gese");

        if(n==0)

            return true;

            else
                return false;



}

int main()
{
   //long long  int n;

   int co=0;
   printf("shuru\n");
    if(prime_fact(3))
          {

                {cout<<"yes"<<endl;
                }
          }
          return 0;
   for (long long int i=2; ;i++)
   {
     //  printf("dhukse\n");

       if(prime_fact(i))
          {
                co=co+1;
                if(co==3)
                {cout<<i<<endl;
                break;
                }

          }


   }
   printf("sh\n");
   return 0;

}
