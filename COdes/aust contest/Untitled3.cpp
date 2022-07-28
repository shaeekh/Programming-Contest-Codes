#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {


    long double u,a,s;
    cin>>u>>a>>s;
    long double v=sqrt((u*u)+(2*a*s));

    long double r=(v-u)/a;
    printf("Case %d: ",i);
    cout << fixed;
   cout << setprecision(6) << r;
   cout<<endl;

}
}
