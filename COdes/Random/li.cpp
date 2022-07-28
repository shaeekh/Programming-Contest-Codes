#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        int n,m;
        cin>>n>>m;
        long long int re=n*m;
        if(re%2==0)
        printf("Case %d: %d\n",i,re/2);
        else
            printf("Case %d: %d\n",i,(re/2+1));
    }
}
