#include <bits/stdc++.h>
using namespace std;
int primefact(int n)
{
    int s=0;
    while (n%2==0)
     {

        printf("%d ", 2);
        s=s+2;
        n=n/2;
     }
    for (int i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            printf("%d ", i);
            s=s+i;
            n=n/i;
          //  cout<<"     3 e to"<<endl;
        }
    }
    if (n>2)
    {s=s+n;
        cout<<n<<endl;
    }
    return s;
}
int main()
{
    long long int n;
    cin>>n;
    int r;
    int sum=0;
    while (n!=0)
    {
        //cout<<"Ok"<<endl;
         r=n%10;
        sum=sum+r;
        n/=10;

}
int get=primefact(n);
if (get==sum)
    cout<<"1"<<endl;
else
    cout<<"0"<<endl;
}
