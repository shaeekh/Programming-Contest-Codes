#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n)
{
    a[0]=INT_MIN;
    for (int j=2;j<=n;j++)
    {
        int t=a[j];
        int i=j-1;
        while(t<a[i])
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=t;

    }
}
int main()

{
    int n;
    cin>>n;
    int a[n];
    for (int i=1;i<=n;i++)
        cin>>a[i];
    insertion(a,n);
    for (int i=1;i<=n;i++)
        cout<<a[i]<<endl;
}
