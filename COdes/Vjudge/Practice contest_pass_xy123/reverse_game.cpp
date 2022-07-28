#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long int n1,n2;
   int r;
   scanf("%llu %llu",&n1,&n2);
   //int i=1;
   unsigned long long int rem_n1;
   while(n1!=0)
   {
       r=n1%10;
       rem_n1=(n1*10)+r;
       n1=n1/10;

   }
   int r2;
  unsigned  long long int rem_n2;
      while(n2!=0)
   {
       r2=n2%10;
       rem_n2=(n2*10)+r2;
       n2=n2/10;

   }
   cout<<rem_n2<<endl;
   unsigned long long int add=rem_n1+rem_n2;
   cout<<add<<endl;
   unsigned long long int rem_n3;
   int r3;
     while(add!=0)
   {
       r3=add%10;
       rem_n3=(add*10)+r;
       add=add/10;

   }

    cout<<rem_n3<<endl;
}
