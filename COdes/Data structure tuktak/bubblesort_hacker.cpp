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
    //int item;
    for (int i=0;i<n-1;i++)
    {

        for (int k=0;k<n-i-1;k++)
        {
            if (a[k]>a[k+1])
                {
                    swap(a[k],a[k+1]);

                }

        }
        for (int tel=0;tel<n;tel++)
        {
            printf("%d ",a[tel]);
        }
        if(i!=n-2)
            cout<<endl;
    }
}
