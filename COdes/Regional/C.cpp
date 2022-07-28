#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;

    cin>>t;

    for (int i=1;i<=t;i++)
    {
        set<int>myset;
        cin>>n;
        int cou=0;
        int a[n][n];
        if(n<5)
            {
                printf("Case %d: 0\n",i);
            }
        else
        {
            for (int j=0;j<n;j++)
            {
                for (int k=0;k<n;k++)
                    {
                        cin>>a[j][k];
                        myset.insert(a[j][k]);
                        if(myset.size()==10)
                        {
                        cou++;
                        myset.clear();
                        //k=0;
                       }

            }
           // j=j-1;
        }
        printf("Case %d: %d\n",i,cou);
    }
}
}
