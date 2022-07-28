#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool te;
        long long int n;
        cin>>n;
        long long int sum=0;
        long long int additional=INT_MAX;
        long long int a[n][n];
        for (long long int i=0;i<n;i++)
        {
            for (long long int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }

        }
        for (long long int i=n-1;i>=0;i--)
        {
            te=true;
          //  cout<<"add "<<additional<<" and i "<<i<<endl;
            long long int fo=0;
            sort(a[i],a[i]+n);
            long long int cur=n-1;
            //cout<<endl<<"cur is " <<a[i][cur]<<endl<<endl;

                if(a[i][cur]<additional)
                {

                    additional=a[i][cur];
              //      cout<<"eikhane " << additional<<endl;
                    sum+=additional;

                }
                else
                {
                    for (int j=n-2;j>=0;j--)
                    {
                        if(a[i][j]>=additional)
                            fo++;
                            else
                            {
                                additional=a[i][j];
                  //              cout<<additional<<endl;
                                sum+=additional;
                                break;
                            }
                    }
                //    cout<<"fo is "<<fo<<"n-2 is "<<n-2<<endl;
                    if(fo==n-1)
                        {
                            te=false;
                             printf("-1\n");
                           break;
                        }
                        else
                            continue;


                }
                }
                if(te)
                cout<<sum<<endl;
    }
}

