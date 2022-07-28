#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
 int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {


    int n;
    int gc=0;
    cin>>n;
   long long  int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        gc=gcd(a[i],gc);
    }


    //sort(a,a+n);
     //cout<<a[0];
    if (gc!=1)
    cout<<"NO"<<endl;
    else
       cout<<"YES"<<endl;


}

}
