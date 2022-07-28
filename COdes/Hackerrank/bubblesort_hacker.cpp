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
    for (int i=0;i<n;i++)
    {

        for (int k=0;k<n-1;k++)
        {
            if (a[k]>a[k+1])
                {
                    swap(a[k],a[k+1]);

                }

        }
        for (int tel=0;tel<n;tel++)
        {
           if(tel==n-1)
              cout<<a[tel];
            else
            cout<<a[tel]<<" ";
        }
        //if(i!=n-1)
            cout<<endl;
    }
}
