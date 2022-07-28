#include<bits/stdc++.h>
using namespace std;
int main()
{
    double  n,k;
    cin>>n>>k;
    double  a;
    double  sum=0;
    for (int i=1;i<=n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    int count=0;

    double r=(sum/n);
    double r2=k-0.5;
    if(r>=r2)
        {cout<<count<<endl;
        return 0;
        }
    else
    {
        for (; ; )
        {
            if(r>=r2)
                break;
            else
            {
                n=n+1;
                sum=sum+k;
               // cout<<"n is"<<n<<endl;
                r=(sum)/n;
               // cout<<"r is "<<r<<endl;
               // cout<<"sum is "<<sum<<endl;
                count++;
                //if (count==8)
            //break;
            }
        }
        cout<<count<<endl;
    }
}





