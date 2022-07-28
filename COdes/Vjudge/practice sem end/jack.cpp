#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>n>>m)
    {
        set<int> s;
        if(n==0 && m==0)
            break;
        for (int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        for (int j=1;j<=m;j++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        cout<<(n+m)-(s.size())<<endl;
    }
}
