#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[30];
    int n;
    cin>>n;

    for (int i=0;i<n;i++)
        cin>>a[i];
    printf("which index you want to delete\n");
    int pos;
    cin>>pos;
    for (int j=pos-1;j<n-1;j++)
    {
        a[j]=a[j+1];
    }
    for (int i=0;i<n;i++)
        cout<<a[i]<<endl;

}
