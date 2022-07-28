#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if ((n%3==0 || n%2==0) && n>3)
        return false;
    else
    {
        for (int i=5;i<=sqrt(n);i+=6)
        {
            if ((n%i==0) || (n%(i+2)==0))
                return false;
        }

    }
    return true;
}
int main()
{

    int n;
    //int rev=0;
    while((scanf("%d", &n)!=EOF))
{
    int mod=1;
    int rev=0;

 bool m=prime(n);
   if (!m)
    printf("%d is not prime.\n", n);
   else
   {

       while (n/mod)
       {
           mod=mod*10;
       }
       mod=mod/10;
       int temp=n;
       while(temp)
       {
           rev+=mod*(temp%10);
           temp/=10;
           mod/=10;
       }
       //cout<<temp<<endl;
       //cout<<n<<endl;
       bool p=prime(rev);
       if (p && rev!=n)
        printf("%d is emirp.\n",n);
       else
        printf("%d is prime.\n",n);

   }

}
}
