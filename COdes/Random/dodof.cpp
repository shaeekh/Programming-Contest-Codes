#include <cstdio>
#include <algorithm>
#include<iostream>
using namespace std;

int main()
{

    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        long long int ans=0;
        scanf("%d",&n);
        int a[1053];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        if(n%2==1)
        {

            a[n]=0;
            n++;
        }
        sort(a,a+n);
        for (int i=0;i+1<n;i+=2)
        {
            cout<<i<<endl;
            int dif=(a[i+1]-a[i])-1;
            ans=ans^dif;
        }
        if(ans==0)
            cout<<"Bob will win"<<endl;
        else
            cout<<"Georgia will win"<<endl;
    }
}

