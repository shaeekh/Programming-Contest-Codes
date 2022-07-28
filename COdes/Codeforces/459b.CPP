#include <bits/stdc++.h>
using namespace std;
int main()
{
long long     int n;
    cin>>n;
    long long int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long int dif=a[n-1]-a[0];
   long long  int count1=0;
    long long int count2=0;
   long long  int final=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]==a[n-1])
            count1++;
        else if (a[i]==a[0])
            count2++;

    }
   if (count1==n)
   {
       final=n*(n-1)/2;
   }
   else

         final=count1*count2;


    printf("%I64d %I64d\n", dif, final);
 //   for (int i=0;i<n;i++)
   // {
     //   cout<<a[i];
//}
}
