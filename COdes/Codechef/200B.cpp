#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n];
    double sum=0;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i]/100;
        sum=sum+a[i];
    }
    double fin=sum/n;
    printf("%.12lf\n",fin*100);
}
