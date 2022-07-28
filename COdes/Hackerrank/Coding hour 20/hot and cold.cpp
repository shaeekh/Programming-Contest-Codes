#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,h1,h2;
    cin>>c1>>c2>>h1>>h2;
    if (c1>h1 || c1>h2 || c2>h1 || c2>h2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
