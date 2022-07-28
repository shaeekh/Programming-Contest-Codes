#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int coo=0;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m][n];
        int ans=0;
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for (int i=0;i<m;i++)
        {
            int sum=0;
            for (int j=0;j<n;j++)
            {
                sum+=a[i][j];

            }
            ans=ans^sum;
        }
        if(ans!=0)
            printf("Case %d: Alice\n",++coo);
        else
            printf("Case %d: Bob\n",++coo);

    }
}
