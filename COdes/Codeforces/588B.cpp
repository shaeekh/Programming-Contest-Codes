#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cur;
    for (int i=1;i<=n;i++)
    {
        int d=pow(i,0.5);
       // cout<<d<<endl;
        if(d*d!=i)
        {
         printf("%d\n",d);
            cur=i;
        }
       // else
         //   continue;

    }
    cout<<cur<<endl;
}
