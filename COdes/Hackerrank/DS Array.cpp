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
    for (int i=n-1;i>=0;i--)
    {
        if(i!=0)
        printf("%d ",a[i]);
        else
            printf("%d\n",a[i]);
    }
}
