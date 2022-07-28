#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    int a[n];
    for (int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int m2=floor(sum/m);
        cout<<m2<<endl;
}
