#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double sum=0;
    //int count=0;
    for (int i=0;i<n;i++)
    {

        sum=sum+a[i];

    }
    printf("%.6lf\n",sum/(n-k+1));
}
