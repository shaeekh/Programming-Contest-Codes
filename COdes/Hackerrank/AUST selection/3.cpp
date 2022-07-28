#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
int n;
    for (int j=1;j<=t;j++)
    {
     long long  int n;
        cin>>n;
      unsigned long long int sum = 0;
       for ( long long int i = 1; i <= n; i++)
       {
        if ((i % 2) == 0)
       {
       sum -= i;
       }
       else
       {
       sum += i;
       }
      }
          printf("%llu\n",sum);

    }

}
