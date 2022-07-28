#include<bits/stdc++.h>
using namespace std;
int check (int n)
{
    if(n==0)
        return 0;
    else if(n%3==0 || n%3==1)
    {
        int ans=(n/3)*2;
        return ans;
    }
    else if(n%3==2)
    {
        int ans=(n/3)*2;
        ans=ans+1;
        return ans;
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);

    int d=check(n-1);
    int e=check(m);
    printf("Case %d: %d\n",i,e-d);
    //cin>>t;
    }
}
