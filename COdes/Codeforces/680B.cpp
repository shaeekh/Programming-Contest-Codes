#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    m=m-1;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   // m=m+1;
    //int c=a[m];
    int ans=0;
    for (int i=0;i<n;i++)
    {
        //int flag=0;
        int d=abs(i-m);
        if((m-d)>=0 && (m+d)<=n-1)
        {
            if (a[m-d]==0)
                {
                    if (a[m+d]==1)
                        ans=ans+0;
                        continue;
                }
              else if (a[m-d]==1)
                {
                    if (a[m+d]==0)
                        ans=ans+0;
                        continue;
                }
                ans++;


        }
    }
    cout<<ans<<endl;
}
