#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    long long int n;
    for (long long int i=1;i<=t;i++)
    {
        int flag=0;

        cin>>n;
        long long int a[n];

        for (long long int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);


    for (long long int k=0;k<n-1;)
    {
        if (a[k]!=a[k+1] && a[k]<a[k+1])
            {k++;
            continue;
            }
        else if (a[k]==a[k+1])
        {
            flag=1;
            break;
        }
    }
if (flag==0)
    printf("YES\n");
else
    printf("NO\n");
}
}

