#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];


    for (int i=1;i<=n;i++)

            cin>>a[i];
    if(n==1)
        cout<<a[1]<<endl;
    else
    {



    sort(a+1,a+n+1);
    int d=(n/2)+1;
  //  cout<<"n and n/2 "<<n<<" "<<n/2<<endl;
    if(n%2==0)
     cout<<a[n/2]<<endl;
     else
     {
         cout<<a[d]<<endl;
     }

    }

}
