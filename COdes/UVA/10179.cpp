#include<bits/stdc++.h>
using namespace std;
int phi (int n)
{
    int result=n;
    for (int i=2;i*i<=n;i++)
    {
        if (n%i==0)
        {
            while(n%i==0)
            {n=n/i;
            }
              //result=result-n;
                        result=result-(result/i);
                    //    cout<<result<<endl;

        }

    }
    if (n>1)
    {
                  result=result-(result/n);
                  //cout<<result<<endl;
    }
    return result;
}
int main()
{
    long long int n;
    for (; ; )
{


    scanf("%lld", &n);
    if (n==0)
       return 0;
    long long int r=phi(n);
    printf("%lld\n",r);

}
}
