#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    return fact(n-1)*n;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a=min(n,m);
    cout<<fact(a)<<endl;

}
