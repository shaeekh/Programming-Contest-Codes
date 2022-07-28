#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if (n>=0)
        cout<<n<<endl;
        else if (n<0 && n>-11)
            cout<<"0"<<endl;

    else
    {
        int remainder1=n%10;
        int n1=n/10;
        int remainder2=n1%10;
        int n2=(n1-remainder2)+remainder1;
        if (n1>=n2)
            cout<<n1<<endl;
        else
            cout<<n2<<endl;
            //cout<<n1<<endl;
            //cout<<n2<<endl;
    }
}
