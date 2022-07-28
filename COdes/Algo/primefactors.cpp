#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void primefact(int n)
{
    while (n%2==0)
     {

        printf("%d ", 2);
        n=n/2;
     }
    for (int i=3;i<=sqrt(n);i=i+2)
    {
        while (n%i==0)
        {
            printf("%d ", i);
            n=n/i;
          //  cout<<"     3 e to"<<endl;
        }
    }
    if (n>2)
        cout<<n<<endl;
}


int main()
{
    int n;
    cin>>n;
    primefact(n);
}
