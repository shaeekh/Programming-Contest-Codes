#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int ma=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
         ma=max(a[i],ma);
    }
    if(ma<=25)
    {
        cout<<0<<endl;
        return 0;
    }

    cout<<ma-25<<endl;
}
