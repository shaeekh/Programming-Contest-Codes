#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prime=1;
    int ma=0;
    int count1=0;
    if(n==25)
    {
        int a[n];
        cin>>a[0];
        //if(a[0]!=1)
          count1=count1+(a[0]-1);
    for (int i=1;i<n;i++)
    {

        cin>>a[i];
        //cout<<"ekhon "<<a[i]-a[i-1]<<endl;

        count1=count1+(a[i]-a[i-1]-1);
        //if(a[i]-a[i-1]!=1)
       // cout<<"tem "<<count1<<" "<<a[i]<<endl;

    }
    cout<<count1<<endl;

    }
    //
    else
    {
        //int curd=25;
        int count2=0;
        int a[n];
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
        if(a[i]>25)
        {
            cout<<ma<<endl;
            count2=(a[i]-25);
            int ma=max(count2,ma);
            cout<<ma<<"eta"<<endl;


            //curd=a[i];
        }
            }
        cout<<ma<<endl;
    }
    return 0;
}

//    cout<<count1
