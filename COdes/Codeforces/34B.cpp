#include <iostream>
#include <stdio.h>
#include <algorithm>
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
    int sum=0;
    sort(a,a+n);
    for (int i=0;i<m;i++)
    {
        if (a[i]>=0)
        {
            break;
        }
        else
        {
            sum=sum+a[i];
        }
    }
    sum=sum*-1;
    cout<<sum<<endl;
}
