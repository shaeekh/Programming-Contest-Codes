#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    int b[n];
    for (int i=0;i<n;i++)
    b[i]=a[i];
    sort(b,b+n, greater<int>());
    for (int i=0;i<n-1;i++)
    {
        if (a[i]<a[i+1])
        {
            swap(a[i],a[i+1]);
            count++;

        }
        if(a[0]==b[0])
            break;
        //cout<<count<<endl;

}
 for (int i=0;i<n-1;i++)
    {
        if (a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
            count++;

        }
        if(a[n-1]==b[n-1])
            break;
        //cout<<count<<endl;

}

cout<<count<<endl;
