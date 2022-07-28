#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int a[n];
    for (long long int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int m=1;
    int sum=0;
    int count=0;
    for (int i=1;i<=(n-k);i++)
    {
        for (int j=m;j<k;j++)
        {
            printf("sum holo\n");
            sum=sum+a[i];
            if(j==m+k)
                count++;
        }
        m++;


    }
    cout<<sum/count<<endl;
}
