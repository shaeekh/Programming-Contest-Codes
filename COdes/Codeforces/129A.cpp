#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    int count=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];

    }
    if(sum==0)
        cout<<"0"<<endl;
   // cout<<sum<<endl;
   else if (sum%2==0)
   {
       for (int i=0;i<n;i++)
       {
           if(a[i]%2==0)
            count++;

       }
   }
   else if (sum%2==1)
   {
       for (int i=0;i<n;i++)
       {
           if(a[i]%2==1)
            count++;

       }
   }
   cout<<count<<endl;
}
