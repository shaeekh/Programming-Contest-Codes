#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int sum=0;
    int sum2=0;
    int i;
    for (i=1;sum<n; i++)
    {
        sum=sum+i;
       // sum2=sum2+sum;

    }
    cout<<i<<endl;
}
