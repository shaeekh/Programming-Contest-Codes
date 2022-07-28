#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {


    int c=0;
    int mode=0;
   // int
    do
    {
         mode=((10*mode)+1)%n;
       // cout<<mode<<endl;
        c++;

    }
    while(mode!=0);
    cout<<c<<endl;
    }
}
