#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=543;
    int mod=1;
    while(n/mod)
    {
        mod*=10;
        cout<<mod<<endl;

    }
    mod/=10;
    cout<<mod<<endl;
    int rp=0;
    cout<<rp<<endl;

  while (n){
            rp += mod * (n % 10);
            cout<<rp<<" "<<n%10<<endl;
                n /= 10;
                cout<<n<<endl;
                mod /= 10;
                cout<<mod<<endl;
            }
cout<<rp<<endl;
}


