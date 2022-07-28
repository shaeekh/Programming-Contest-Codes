#include<bits/stdc++.h>
using namespace std;
vector<int> v[204];
int main()
{
    int t;
    cin>>t;

    int n,m;
    while(t--)
    {
        for (int i=0;i<204;i++)
            v[i].clear();
        cin>>n>>m;
        for (int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            a=a-1;
            b=b-1;
            v[a].push_back(b);
            v[b].push_back(a);

        }
            bool flag=true;
        for (int i=0;i<n;i++)
        {
            if(v[i].size()<n-1)
            {
                flag=false;
                break;
            }

        }
        if(flag==false)
            printf("NO\n");
        else
            printf("YES\n");
    }

}
