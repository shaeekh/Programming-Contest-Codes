#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        long long int get=a%b;
        if(get&1)
            printf("ODD\n");
        else
            printf("EVEN\n");

    }
}
