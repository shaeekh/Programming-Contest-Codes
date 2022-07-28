#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,num;
    int count1=0;
    cin>>n>>a>>b;
    int track=0;
    for (int i=1;i<=n;i++)
    {
        cin>>num;
        if(num==1)
             {
                 if(a!=0)
                 {
                     a=a-1;
                 }
                 else if (b!=0)
                 {
                     b=b-1;
                     track=track+1;
                 }
                 else if ( track!=0)
                 {
                     track=track-1;
                 }
                 else if(a==0 && b==0 & track==0)
                 {
                     count1=count1+1;
                 }
             }
             else if(num==2)
             {
                 if(b!=0)
                 {
                     b=b-1;
                 }
                 else
                    count1=count1+2;
             }

    }
    cout<<count1<<endl;

}
