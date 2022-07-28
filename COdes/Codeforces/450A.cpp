#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int last=n-1;
    //cout<<last<<endl;
    for (int i=0;i<n;i++)
    {
        if (a[i]<=m)
            continue;
        else if (a[i]>m)
            last=i;

    }
    cout<<last+1<<endl;
}
