#include <bits/stdc++.h>
using namespace std;
int phi(int n)
{
    int result=n;
    for (int i=2;i*i<=n;++i)
    {
        if (n%i==0)
        {
            while (n%i==0)
            {
                n/=i;
             //   result*=1.0-(1.0/(float)i);
                //cout<<result<<endl;
            }
            result=result-(result/i);
        }
    }
    if (n>1)
    {
  //      result*=1.0-(1.0/(float)n);
  result=result-(result/n);
    }
    return (int) result;
}
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {


    int n;
    cin>>n;
    int r=phi(n);
    cout<<r<<endl;;


}
}
