#include<bits/stdc++.h>
using namespace std;
void rec(int i,int j,int* n,int a[] )
{
    if(i==*n)
    {
        *n=j-1;
        return;
    }
    if(a[i]%2==0)
        {a[j]=a[i];
    j++;
        }
    rec(i+1,j,n,a);
}
int main()
{
    int n;
    cin>>n;
    int a[53];
    for (int i=1;i<=n;i++)
        cin>>a[i];
    rec(1,1,&n,a);
    for (int i=1;i<=n;i++)
        cout<<a[i]<<endl;
}
