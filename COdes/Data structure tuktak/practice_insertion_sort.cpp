#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    a[0]=-2145956;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int i;
    for (int j=2;j<=n;j++)
    {
        int t=a[j];
        i=j-1;
        while(t<a[i])
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=t;
    }
    for (int i=1;i<=n;i++)
        cout<<a[i]<<endl;
}
