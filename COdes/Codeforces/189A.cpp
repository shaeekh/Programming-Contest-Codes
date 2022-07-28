#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3];
    int result;
    for (int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
   // for (int i=0;i<3;i++)
        //cout<<a[i]<<endl;
    for (int i=0;i<3;i++)
    {
        if (n%a[i]==a[0] || n%a[i]==a[1] || n%a[i]==a[2] ||n%a[i]==0)
            {
            result=a[i];
          //  cout<<n%a[i]<<endl;
          cout<<4000/1333<<endl;

           // cout<<result;
            break;
            }
            else
                continue;
    }
    if (n%result==0)
    cout<<n/result<<endl;
    else
        cout<<n/result+1<<endl;
}

