#include<bits/stdc++.h>
using namespace std;

 bool isprime(unsigned long long int n)
    {


    if (n<=3 && n>1)
        return true;
    if (n==1)
        return false;
    if ((n%2==0 || n%3==0) && n>3)
        {
      //      flag=1;
            //cout<<"NO"<<endl;
            return false;
        }
    else
    {
        for (int i=5;i<=sqrt(n);i=i+6)
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

    }
    return true;
    }








int main()
{
    unsigned long long int n,m;
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {


    scanf("%llu %llu",&n,&m);
    int sum=0;
    for (unsigned long long int j=n;j<=m;j++)
    {


    //long long int n;
    //cin>>n;
   bool p=isprime(j);
    if(p==true)
       {sum=sum+j;
       //cout<<"p holo"<<p<<endl;
    }

}
//cout<<sum<<endl;
if(sum%2==0)
    printf("Case %d: Even\n",i);
    else
        printf("Case %d: Odd",i);
}
}

