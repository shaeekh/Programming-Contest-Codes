#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int flag=0;
    for (int i=1;i<=t;i++)
    {
        cin>>n;
        int ar[n];
        for (int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for (int i=0;i<n-1;i++)
        {
            if (ar[i+1]-ar[i]==1 || ar[i]-ar[i+1]==1)
            swap(ar[i],ar[i+1]);
        }

    for (int i=0;i<n-1;i++)
    {
        if (ar[i]>ar[i+1])
        {
            flag=1;
            cout<<"No"<<endl;
            break;
        }
    }

    if (flag==0)
        cout<<"Yes"<<endl;
}
}

