#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);
     //  map<long long int,long long int> mp;
    long long int s[n];
    long long int c[n];
    for (int i=0;i<n;i++)
        scanf("%lld",&s[i]);
    for (int i=0;i<n;i++)
        {
            scanf("%lld",&c[i]);

        }

   // stack<long long int> ans;
   // stack<long long int> ans2;



    long long int sum=INT_MAX;
    for (long long int i=1;i<n;i++)
    {
        cout<<"s[i] "<<s[i]<<endl;
            long long int temp=INT_MAX;
             long long int guti=INT_MAX;

        for (long long int j=0;j<i;j++)
        {


            if(s[j]<s[i])
            {
                cout<<"s[i] and s[j] "<<s[i]<<" "<<s[j]<<endl;
                  cout<<"c "<<c[j]<<endl;
                temp=min(temp,c[j]);
                cout<<"1st temp "<<temp<<endl;


            }




        }
         for (long long int j=i+1;j<n;j++)
        {


            if(s[j]>s[i])
            {
                guti=min(guti,c[j]);
                      cout<<"2nd temp "<<guti<<endl;

            }




        }

        sum=min(sum,(guti+temp+c[i]));
    }



      if(sum!=INT_MAX)
    cout<<sum<<endl;
    else
        cout<<"-1"<<endl;



}
