#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ml;
    cin>>n,ml;
    int bal=min(n,ml);
 //   cout<<bal<<endl;
    if(bal%2==0)
        cout<<"Malvika";
    else if(bal%2==1)
        cout<<"Akshat";
}
