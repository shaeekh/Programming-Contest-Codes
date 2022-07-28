#include<bits/stdc++.h>
using namespace std;
long long int power(long long int x,long long int n)
{
    long long int temp=1;
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
        long long int p,m;
       cin>>p>>m;
       if(p>=27)
        {
            cout<<m<<endl;
            return 0;
        }
        else
        {
            long long int res;
            long long int t=2;
            res=power(t,p);
            cout<<m%res<<endl;

        }

}

