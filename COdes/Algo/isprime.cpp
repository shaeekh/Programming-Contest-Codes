#include<bits/stdc++.h>
using namespace std;

 bool isprime(long long int n)
{
    if(n==1)
        return false;

//if(n%2==0)
  //  return false;
else
{
    for (long long int i=2;i*i<=(n);i++)
    {
        if(n%i==0)
            {//return false;
           // if(n==57)
             //   cout<<i<<endl;
                return false;
            }
    }
}
return true;
}


    /*if (n<=3 && n>1)
        return true;
    if (n==1)
        return false;
    if ((n%2==0 || n%3==0) && n>3)
        {
      //      flag=1;
            //cout<<"NO"<<endl;
            return false;
        }
   // else
    //{
        for (long long int i=5;i*i<=n;i=i+6)
        {
            if (n%i==0 || n%(i+2)==0)
            {
                return false;
                //cout<<"NO"<<endl;
        //        flag=1;

                //return 0;

            }

        }
      //  return true;

    //}
    return true;
    }



*/




int main()
{


int t;
cin>>t;
for (int i=1;i<=t;i++)
{
    long long int n;
    cin>>n;
    if(isprime(n)==true)
      cout<<n<<" is a prime"<<endl;
    else
    cout<<n<<" is not a prime"<<endl;

}
return 0;

}
