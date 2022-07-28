#include<bits/stdc++.h>
using namespace  std;
int main()
{
    unsigned long long int n,q;
    scanf("%llu %llu",&n,&q);
    unsigned long long int a[n];
     unsigned long long int b[q];
    for (int i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }
    for (int i=0;i<q;i++)
    {
        scanf("%llu",&b[i]);
    }

    sort(a,a+n,greater<int>());
    //int count=0;
    for (int i=0;i<q;i++)
    {
          int count=0;
        for (int j=0;j<n;j++)
        {
            if(a[j]<b[i])
                {
               // cout<<a[j]<<" " <<b[i]<<endl;

                break;
                }
            else if (a[j]>=b[i])
            {//cout<<a[j]<<"count hocche " <<b[i]<<endl;
                count++;
            }
        }
        cout<<count<<endl;
    }

}



