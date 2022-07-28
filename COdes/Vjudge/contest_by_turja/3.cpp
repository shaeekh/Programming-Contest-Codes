#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    stack<double> s;
    int d=0;

    while((scanf("%lld",&n))!=EOF)
    {
        double a=sqrt(n);
        s.push(a);
        d++;
        if(d>256000)
            break;

    }
    while(!s.empty())
    {
        cout<<setprecision(4)<<s.top()<<endl;
        s.pop();
    }

}
