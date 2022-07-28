#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
        string n;
        int p;
        cin>>n>>p;
        int count=0;
        for (int j=0;j<n.size();j++)
        {
            if(j==0 && n[j]=='0')
                n[j+1]=n[j];
            else if(n[j]!='9')
                {
                    n[j]='9';
                    count++;
                    if(count==p)
                        break;
                }

            else
                continue;
        }


        printf("Case %d: ",i);
        if(n[0]!='0')
        {
            cout<<n<<endl;
        }
        else
        {
            for (int ini=1;ini<n.size();ini++)
                {cout<<n[i];
                if(ini==(n.size()-1))
                    cout<<endl;
                }
        }
    }
}
