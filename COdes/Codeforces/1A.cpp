#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int row,collum,n,m,a;
    cin>>n>>m>>a;
    if (n%a==0)
        row=n/a;
        else
            row=(n/a)+1;
        if (m%a==0)
            collum=m/a;
        else
            collum=(m/a)+1;
        cout<<row*collum<<endl;
}
