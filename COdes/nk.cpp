#include<bits/stdc++.h>
using namespace std;
long long int pali(long long int m)
{

    long long int a=m;
    long long int b=m;
    while(a>0)
    {
        b=(b*10)+(a%10);
        a/=10;
    }
//    if(evendigit(b))
  //  {
        return b;
    //}
    //else
      //  return -1;
}

int main()
{
    long long int  e=11;
long long int d=pali(e);
cout<<d<<endl;
}
