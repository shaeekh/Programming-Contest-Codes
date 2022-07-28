#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    int a[n];
    int b[n];
    int x,y,flag=0;
    int c[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        c[i]=a[i]*100000+b[i];
    }
    sort(c,c+n);
    for (int i=0;i<n;i++)
    {
        if (s>c[i]/100000)
        {
            s=s+(c[i]%100000);
        }

    else
    {
        cout<<"NO";
        flag=1;
        break;
    }
    }
    if (flag==0)
        cout<<"YES";
}
