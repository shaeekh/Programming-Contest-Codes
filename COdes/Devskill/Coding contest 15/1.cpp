#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {
        int n;
        string s;
        cin>>n>>s;
        int l=s.size();
        if (l==n)
            cout<<"1"<<endl;
            else
            {
                //float a=n-l;
               // cout<<a<<endl;
                long long int res=pow(26.0,(n-l));
                printf("%lld\n",res);
              //  cout<<pow(2,3);
            }
    }

}
