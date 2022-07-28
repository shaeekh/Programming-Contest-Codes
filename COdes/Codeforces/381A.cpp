#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        {cin>>a[i];
        }
        int sum1=0;
        int sum2=0;
        int i=0,j=n-1;
         int ma;
         int k=0;

    while(i<=j)
    {
//        cout<<"a[i] and a[j]  "<<a[i]<<" "<<a[j]<<endl;



            if(a[i]>=a[j])
                {ma=a[i];
  //              cout<<ma<<" i"<<endl;
                i++;
                }
            else
               {

                ma=a[j];
    //        cout<<ma<<endl;
            j--;
               }
            if(k%2==0) sum1+=ma;
            else sum2+=ma;

        //else
          //  break;
          k++;
    }
    cout<<sum1<<" "<<sum2<<endl;
}

