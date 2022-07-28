#include<bits/stdc++.h>
using namespace std;
int power(int x,int n)
{
    int temp=1;
    if(n==0)
        return 1;
     temp=power(x,n/2);
    if(n%2==0)
        return (temp*temp);
    else
        return (temp*temp*x);
}
int main()
{
    int x,n;
    while(cin>>x>>n)
    {


    int d=power(x,n);
    cout<<d<<endl;

}
}
