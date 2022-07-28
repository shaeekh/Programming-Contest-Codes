#include<bits/stdc++.h>
using namespace std;
//int bin(int r)
//{
  //  long long l1,h1;
    //l1=
//}
int main()
{
    int dop=0;
    int n,q;
    while(cin>>n>>q)
    {
        if(n==0)
            return 0;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
         printf("CASE# %d:\n",++dop);
        for (int j=1;j<=q;j++)
        {
            int cu;
            cin>>cu;
            long long h1,l1;
            l1=lower_bound(a,a+n,cu)-a;
            cout<<l1;
            h1=upper_bound(a,a+n,cu)-a;
            cout<<h1;

            if(l1==h1)
                printf("%d not found\n",cu);
                else
                printf("%d found at %d\n",cu,l1+1);


        }



    }
}
