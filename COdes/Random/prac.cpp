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
    int min1=34;
    sort(a,a+n);
    for (int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            if(a[j]-a[i]<min1)
                {
                    min1=a[j]-a[i];
                   cout<<min1<<endl;

                }
        }
    }
    cout<<min1<<endl;
}
