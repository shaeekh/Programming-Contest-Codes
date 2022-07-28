#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    string s[n];
    string f[m];
    long long int c[n];
    map<string,int> mp1;
    int d[n];
    for (int i=1;i<=n;i++)
    {
        cin>>s[i];


    }
     for (int i=1;i<=n;i++)
    {
        int cost;
        cin>>cost;
        mp1[s[i]]=cost;


    }

    map<long long int ,long long int > mp;

    int mpc=0;
    int arc=0;
    for (int i=1;i<=k;i++)
    {
        mpc=mpc+1;
        int pp;
        cin>>pp;
        //long long int maxi=1000000019
        while(pp--)
        {
            long long int dd;
            cin>>dd;
            mp[dd]=mpc;
          //  mp1[mpc]=dd;
            d[++arc]=mpc;


        }

    }
    sort(d,d+n);
    for (int i=1;i<=m;i++)
    {
        cin>>f[i];
    }
    for (int i=1;i<=n-1;i++)
    {
        if(d[i]==d[i+1])
        {
            if(mp1[s[i]]>mp1[s[i+1]])
            {
                if(i<=m)


                f[i]=s[i+1];
        }

    }


}
for (int i=1;i<=m;i++)
{
    if(i!=m)
    cout<<f[i]<" ";
    else
        cout<<f[i];
}
cout<<endl;
}

