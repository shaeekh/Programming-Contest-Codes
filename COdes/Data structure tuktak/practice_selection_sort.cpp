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
    for (int j=n;j>=1;j--)
    {
        int t=0;

        for (int k=1;k<=j;k++)
        {
            if(a[t]<a[k])
            {
                t=k;
            }
            swap(a[j],a[t]);
        }

//swap(a[t],a[k]);
}
for (int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}

