#include<bits/stdc++.h>
int gcd (int a,int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int count=0;
    while(n>=0)

    {
        if(count%2==0)
        {
            int ra=gcd(a,n);
            n=n-ra;
        }
        else
        {
            int pa=gcd(b,n);
            n=n-pa;
        }

        count++;
    }
    if(count%2==0)
        cout<<"0"<<endl;
    else
        cout<<"1"<<endl;

}
