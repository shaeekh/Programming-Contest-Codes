#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        char a[n][m];
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<m;k++)
            {

                cin>>a[j][k];
            }
        }
        int sum=0;
           for (int j=0;j<n;j++)
        {
            for (int k=0;k<m;k++)
            {
                if(a[j][k]==a[j][k-1])
                {
                    if(a[j][k]=='G')
                        {
                            printf("j is %d, k is  %d \n",j,k);
                            sum+=3;
                            a[j][k]='R';
                        }
                }
            }

            }
          for (int j=0;j<n;j++)
        {
            for (int k=0;k<m;k++)
            {
                if(a[j][k]==a[j][k-1])
                {
                    if(a[j][k]=='R')
                        {
                            printf("j is %d, k is  %d \n",j,k);
                            sum+=5;
                            a[j][k]='G';
                        }
                }
            }

            }



        cout<<sum<<endl;

    }
}
