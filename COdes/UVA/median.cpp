#include<bits/stdc++.h>
using namespace std;
#define  pb push_back
int main()
{
    long long int n;
    vector<int> v;
    while(cin>>n)
    {
        v.pb(n);
        sort(v.begin(),v.end());
    //  int d=((v.size()/2)+((v.size()/2)-1))/2;
        if(v.size()%2!=0)
        cout<<v[v.size()/2]<<endl;
        else
            cout<<((v[v.size()/2])+(v[v.size()/2-1]))/2<<endl;


    }
}
