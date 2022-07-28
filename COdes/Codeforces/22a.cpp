
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int> b;
    for (int i=0;i<n;i++)
    {
        b.insert(a[i]);
    }
    if (b.size()<2)
        cout<<"NO"<<endl;
    else
        cout<<*(++b.begin())<<endl;
}
