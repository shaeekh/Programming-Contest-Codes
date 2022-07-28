#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;
 while(t--)
    {
        cin>>n>>k;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        //printf("sorted lements are  \n");
        // for (int i=0;i<n;i++)
        //{
          //  cout<<a[i]<<endl;
        //}

//     printf("shesh\n");
    int dif=INT_MAX-1;
//    cout<<dif<<endl;
int temp;

            for (int i=0;i<=n-k;i++)
        {
             temp=(a[i+k-1]-a[i]);
            //cout<<"temp "<<temp<<endl;
          //  cout<<a[i+k-1] <<" " <<a[i]<<endl;
            if(dif>temp)
                dif=temp;

        }
        cout<<dif<<endl;
    }
}

